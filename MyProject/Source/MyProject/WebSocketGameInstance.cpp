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
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, MessageString);

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

		//Check if we are in control room
		FString controlRoom = "ControlRoom";
		const FString& controlRoomRef = controlRoom;
		bool iscontrolRoom = MessageString.Equals(controlRoomRef);

		if (isTrigger1) {
			//InControlRoom = false;
			//InPuzzle1 = true;

			GoToPuzzle1();
		}

		if (isTrigger2) {
			//InControlRoom = false;
			//InPuzzle2 = true;

			GoToPuzzle2();
		}

		if (isTrigger3) {
			//InControlRoom = false;
			//InPuzzle3 = true;

			GoToPuzzle3();
		}

		if (iscontrolRoom) {
			//InControlRoom = true;
			//InPuzzle1 = false;
			//InPuzzle2 = false;
			//InPuzzle3 = false;

			GoToControlRoom();
		}

		//Check if player triggers puzzles below
		//Trigger puzzle1
		FString TriggerPuzzle1 = "TriggerPuzzle1";
		const FString& TriggerPuzzle1Ref = TriggerPuzzle1;
		bool isTriggerPuzzle1 = MessageString.Equals(TriggerPuzzle1Ref);

		//Trigger puzzle2
		FString TriggerPuzzle2 = "TriggerPuzzle2";
		const FString& TriggerPuzzle2Ref = TriggerPuzzle2;
		bool isTriggerPuzzle2 = MessageString.Equals(TriggerPuzzle2Ref);
		
		//Trigger puzzle3
		FString TriggerPuzzle3 = "TriggerPuzzle3";
		const FString& TriggerPuzzle3Ref = TriggerPuzzle3;
		bool isTriggerPuzzle3 = MessageString.Equals(TriggerPuzzle3Ref);
		
		if (isTriggerPuzzle1)
		{
			TriggerPuzzle1event();
		}

		if (isTriggerPuzzle2)
		{
			TriggerPuzzle2event();
		}

		if (isTriggerPuzzle3)
		{
			TriggerPuzzle3event();
		}

		if (MessageString.IsNumeric()) //Checks if messages comes from puzzle 1
		{			
			//if (InPuzzle1)
				SendPlayerInput(MessageString);
		}
		
		if (MessageString.Contains("+")) //Checks if messages comes from puzzle 2
		{
			//if (InPuzzle2)
				SendPlayerInput(MessageString.Replace(TEXT("+"), TEXT("")));
		}
		
		if (MessageString.Contains(" ")) //Checks if messages comes from puzzle 3
		{
			//if (InPuzzle3)
				SendPlayerInput(MessageString.Replace(TEXT(" "), TEXT("")));
		}

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

void UWebSocketGameInstance::GoToPuzzle1()
{
	DelegatePuzzle1.Broadcast(69, "");
}

void UWebSocketGameInstance::GoToPuzzle2()
{
	DelegatePuzzle2.Broadcast(69, "");
}

void UWebSocketGameInstance::GoToPuzzle3()
{
	DelegatePuzzle3.Broadcast(69, "");
}

void UWebSocketGameInstance::GoToControlRoom()
{
	ControlRoom.Broadcast(69, "");
}

void UWebSocketGameInstance::TriggerPuzzle1event()
{
	DelegateTriggerPuzzle1.Broadcast(69, "");
}

void UWebSocketGameInstance::TriggerPuzzle2event()
{
	DelegateTriggerPuzzle2.Broadcast(69, "");
}

void UWebSocketGameInstance::TriggerPuzzle3event()
{
	DelegateTriggerPuzzle3.Broadcast(69, "");
}

void UWebSocketGameInstance::SendPlayerInput(FString text)
{
	DelegateSendPlayerInput.Broadcast(420, text);
}