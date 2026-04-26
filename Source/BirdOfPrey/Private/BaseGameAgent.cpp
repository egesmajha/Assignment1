// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> newWeaponType)
{
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform() const
{
	return FTransform();
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

  float ABaseGameAgent::TakeDamage(float damage, float& actualDamage)
{
	return actualDamage;
}

  bool ABaseGameAgent::IsAlive() const
  {
	  return false;
  }

  void ABaseGameAgent::Died(AController* killer)
  {

  }

  void ABaseGameAgent::PlayHitEffects()
  {
  }

  void ABaseGameAgent::CleanUp()
  {
  }

  void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo newInfo)
  {
  }

  void ABaseGameAgent::AimAt(FVector aimTarget)
  {
	 
  }

  void ABaseGameAgent::PlayDeathEffects()
  {
  }

  void ABaseGameAgent::CheckForOutOfBounds()
  {
  }
