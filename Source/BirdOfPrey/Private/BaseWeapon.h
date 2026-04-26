// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform() const;

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool HasFinishedFiring() ;

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool IsFiring() const; 

private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* fireParticleEffect;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundCue* fireSoundCue;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bRequiresAimForAI = false;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bIsAutomatic = false;
};