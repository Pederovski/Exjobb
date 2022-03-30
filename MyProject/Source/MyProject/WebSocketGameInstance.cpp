// Fill out your copyright notice in the Description page of Project Settings.
#include "WebSocketGameInstance.h"
#include "WebSocketsModule.h"
#include <string>
#include <iostream>

void UWebSocketGameInstance::Init() {

	Super::Init();

	if (!FModuleManager::Get().IsModuleLoaded("WebSockets")) {
		FModuleManager::Get().LoadModule("WebSockets");
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket("ws://localhost:5500");

	// Event handlers
	WebSocket->OnConnected().AddLambda([]() {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Successfully connected");
		});

	WebSocket->OnConnectionError().AddLambda([](const FString& Error) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Connection lost " + Error);
		});

	WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, bWasClean ? FColor::Green : FColor::Red, "Connection closed " + Reason);
		});

	// Receiving message
	WebSocket->OnMessage().AddLambda([this](const FString& MessageString) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, "Received message: " + MessageString);

		std::string converted = TCHAR_TO_UTF8(*MessageString);
		FString HappyString0(converted.c_str());
		FString compare = "Trigger1";

		const FString& compareRef = compare;

		//For debugging
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Converted: " + HappyString0);

		if (MessageString.Equals(compareRef)) {
			InControlRoom = false;
			InPuzzle1 = true;

			OutputText = "Im in puzzle1 woho :)";
		}

		OutputText = "Im not in puzzle 1 :(";
		//std::string const s = TCHAR_TO_UTF8(*MessageString); //Convert from FString to string
		});

	// Sending message
	WebSocket->OnMessageSent().AddLambda([](const FString& MessageString) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta, "Sent message: " + MessageString);
		});

	WebSocket->Connect();
}

void UWebSocketGameInstance::Shutdown() {

	if (WebSocket->IsConnected()) {
		WebSocket->Close();
	}

	Super::Shutdown();
}

FString UWebSocketGameInstance::getMessage(const FString* MessageRecived) {

	return OutputText = *MessageRecived;
}