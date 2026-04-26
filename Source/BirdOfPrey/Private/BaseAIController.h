// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float RefireDelay = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bShouldUpdateAim = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;
};
