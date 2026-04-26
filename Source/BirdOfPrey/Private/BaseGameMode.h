// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "TimerManager.h"
#include "WorldCamera.h"
#include "BasePowerup.h"
#include "BaseGameAgent.h"
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

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FVector GetWorldScrolVelocity();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	AWorldCamera* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* enemy, AController* killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseGameAgent* SpawnEnemyFrom(const TArray<TSubclassOf<ABaseGameAgent>>& classList) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector location);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTravelled();
};
