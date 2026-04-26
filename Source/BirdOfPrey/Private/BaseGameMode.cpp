// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrolVelocity()
{
    return FVector();
}

AWorldCamera* ABaseGameMode::GetWorldCameraActor()
{
    return nullptr;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* enemy, AController* killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool success)
{
}

ABaseGameAgent* ABaseGameMode::SpawnEnemyFrom(const TArray<TSubclassOf<ABaseGameAgent>>& classList) const
{
    return nullptr;
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
    return 0.0f;
}
