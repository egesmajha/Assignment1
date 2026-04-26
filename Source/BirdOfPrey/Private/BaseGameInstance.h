// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AgentInfo.h"
#include "BaseGameInstance.generated.h"



/**
 *
 */
UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> playerAgentInfo;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor(int32 playerControllerID, FSAgentInfo agentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FSAgentInfo GetPlayerAgentInfoFor(int32 playerControllerID, bool& success);


};