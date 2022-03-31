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

		//Check if we are in puzzle1
		FString Trigger1 = "Trigger1";
		const FString& Trigger1Ref = Trigger1;
		bool isTrigger1 = MessageString.Equals(Trigger1Ref);

		//Check if we are in puzzle2
		FString Trigger2 = "Trigger2";
		const FString& Trigger2Ref = Trigger2;
		bool isTrigger2 = MessageString.Equals(Trigger2Ref);

		//Check if we are in puzzle3
		FString Trigger3 = "Trigger3";
		const FString& Trigger3Ref = Trigger3;
		bool isTrigger3 = MessageString.Equals(Trigger3Ref);

		if (isTrigger1) {
			InControlRoom = false;
			InPuzzle1 = true;
			GoToPuzzle1();
			OutputText = "Im in puzzle1 woho :)";
		}

		if (isTrigger2) {
			InControlRoom = false;
			InPuzzle2 = true;

			OutputText = "Im in puzzle2 woho :)";
		}

		if (isTrigger3) {
			InControlRoom = false;
			InPuzzle3 = true;

			OutputText = "Im in puzzle3 woho :)";
		}

		//Go to correct room
		//if (InControlRoom)
		//{
		//	//GoToControlRoom();
		//}
		//if (InPuzzle1)
		//{
		//	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "I will now go to puzzle1");
		//}		
		//if (InPuzzle2)
		//{
		//	//GoToPuzzle2();
		//}		
		//if (InPuzzle3)
		//{
		//	//GoToPuzzle();
		//}


		//Trigger puzzle1
		FString TriggerPuzzle1 = "TriggerPuzzle1";
		const FString& TriggerPuzzle1Ref = TriggerPuzzle1;
		bool isTriggerPuzzle1 = MessageString.Equals(TriggerPuzzle1Ref);

		//For Debugging
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Bool: %s"), isTriggerPuzzle1 ? TEXT("true") : TEXT("false")));

		if (isTriggerPuzzle1)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "I will now trigger puzzle1 yea");
			//TriggerPuzzle1event();
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "I triggered puzzle1 uwu");
		}

		////Trigger puzzle2
		//FString Trigger2 = "Trigger2";
		//const FString& Trigger2Ref = Trigger2;
		//bool isTrigger2 = MessageString.Equals(Trigger2Ref);

		////Trigger puzzle3
		//FString Trigger3 = "Trigger3";
		//const FString& Trigger3Ref = Trigger3;
		//bool isTrigger3 = MessageString.Equals(Trigger3Ref);

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

