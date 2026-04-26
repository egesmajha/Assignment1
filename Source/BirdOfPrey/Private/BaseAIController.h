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


public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector aimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldUpdateAim();




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