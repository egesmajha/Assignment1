// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform spawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTarnsform(int32 shotNumber) const
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire() const
{
	return false;
}
