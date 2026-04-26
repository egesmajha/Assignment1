// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 *
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UPointLightComponent* pointLight;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UAudioComponent* hoverAudio;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABasePlayerController* basePlayerController;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float invulnerabilityTime = 0.0f;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& direction, float& speed) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCamerBounds();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float dist, float max);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FVector CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void  GetPlayerAgentInfo(APlayerController* playerController);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool HasDiedRecently();


};