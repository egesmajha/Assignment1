// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "TimerManager.h"
#include "WorldCamera.h"
#include "BasePowerup.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float worldScrollSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FVector2D maxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	AWorldCamera* worldCameraActor;



	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float respawnDelay = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float spawnOffset = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle stationarySpawnTimer;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle shipSpawnTimer;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TArray<TSubclassOf<ABasePowerup>> powerUpList;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float pickUpSpawnPercent = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool isGameOverScreen = false;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* playerAgentInfoTable;
};
