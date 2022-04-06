// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IWebSocket.h"
#include "WebSocketGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewTypeDelegae, int, number, int, number2);
/**
 * 
 */
UCLASS()
class MYPROJECT_API UWebSocketGameInstance : public UGameInstance
{
	GENERATED_BODY()


public:

	//Delegates for triggering events in blueprint
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle1;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle2;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle3;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae ControlRoom;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegateTriggerPuzzle1;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegateTriggerPuzzle2;
	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegateTriggerPuzzle3;

	//Functions that call the above delegates
	UFUNCTION(BlueprintCallable)
		void GoToPuzzle1();
	UFUNCTION(BlueprintCallable)
		void GoToPuzzle2();
	UFUNCTION(BlueprintCallable)
		void GoToPuzzle3();
	UFUNCTION(BlueprintCallable)
		void GoToControlRoom();
	UFUNCTION(BlueprintCallable)
		void TriggerPuzzle1event();
	UFUNCTION(BlueprintCallable)
		void TriggerPuzzle2event();
	UFUNCTION(BlueprintCallable)
		void TriggerPuzzle3event();

	UFUNCTION(BlueprintImplementableEvent)
	int OnUsed();

	virtual void Init() override;
	virtual void Shutdown() override;

	//FString getMessage(const FString* MessageRecived);

	TSharedPtr<IWebSocket> WebSocket;

private:

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FString OutputText = "Hello from C++";

	bool InControlRoom = true;
	bool InPuzzle1 = false;
	bool InPuzzle2 = false;
	bool InPuzzle3 = false;

protected:

	virtual int OnUsed_Implementation();

};
