// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystem.h"
#include "BasePowerup.generated.h"

UCLASS()
class ABasePowerup : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABasePowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundCue* pickUpSoundCue;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* pickUpParticleSystem;
};