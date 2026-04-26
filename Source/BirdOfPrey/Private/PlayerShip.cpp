// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

void APlayerShip::GetShipConstantVelocity(FVector& direction, float& speed) const
{
}

void APlayerShip::ClampToCamerBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float dist, float max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutOfBoundsAdjustment()
{
	return FVector();
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* playerController)
{
}

bool APlayerShip::ShouldSpawnAIController()
{
	return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}
