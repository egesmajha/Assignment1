// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "BaseGameAgent.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float ProjectileSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Damage = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckDistance = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckAngle = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundBase* ImpactSound;
};
