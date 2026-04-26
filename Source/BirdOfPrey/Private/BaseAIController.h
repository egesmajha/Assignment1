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
	float lastFireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float refireDelay = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bShouldUpdateAim = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABasePlayerController* target;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* controlledAgent;
};