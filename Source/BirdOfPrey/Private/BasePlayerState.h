// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	float PlayerScore = 0.0f;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	int32 RemainingLives = 0;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	float TimeOfLastDeath = 0.0f;

	
};
