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
};