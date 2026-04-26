// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseProjectile.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile> ProjectileType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float RefireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	int32 NumShots = 0;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ = 0.0f;
	
};
