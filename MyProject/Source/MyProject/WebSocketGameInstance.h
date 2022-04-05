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

	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle1;

	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle2;

	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae DelegatePuzzle3;

	UPROPERTY(BlueprintAssignable)
		FNewTypeDelegae ControlRoom;

	UFUNCTION(BlueprintCallable)
		void GoToPuzzle1();

	UFUNCTION(BlueprintCallable)
		void GoToPuzzle2();

	UFUNCTION(BlueprintCallable)
		void GoToPuzzle3();

	UFUNCTION(BlueprintCallable)
		void GoToControlRoom();

	//UFUNCTION(BlueprintImplementableEvent)
	//void TriggerPuzzle1event();
	//UFUNCTION(BlueprintImplementableEvent)
	//void GoToControlRoom();
	//UFUNCTION(BlueprintImplementableEvent)
	//void GoToPuzzle1();
	//UFUNCTION(BlueprintImplementableEvent)
	//void GoToPuzzle2();
	//UFUNCTION(BlueprintImplementableEvent)
	//void GoToPuzzle();

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
