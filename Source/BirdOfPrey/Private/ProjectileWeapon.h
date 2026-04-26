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

public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform spawnTransform);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTarnsform(int32 shotNumber) const;

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ReadyToFire() const;

private:

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABaseProjectile> projectileType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	float refireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	float lastFireTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	int32 numShots = 0;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey", meta = (AllowPrivateAccess = "true"))
	float desiredZ = 0.0f;
};