// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IWebSocket.h"
#include "WebSocketGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class MYPROJECT_API UWebSocketGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;
	virtual void Shutdown() override;

	FString getMessage(const FString* MessageRecived);

	TSharedPtr<IWebSocket> WebSocket;

private:

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FString OutputText = "Hello from C++";

	bool InControlRoom = true;
	bool InPuzzle1 = false;
	bool InPuzzle2 = false;
	bool InPuzzle3 = false;

};
