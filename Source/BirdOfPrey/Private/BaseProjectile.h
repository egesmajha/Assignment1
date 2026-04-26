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
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialseProjectile(FVector direction, float speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* damaging, float damageAmount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* overlappedComponent, AActor* otherActor);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget() ;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();



private:
	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")

	UProjectileMovementComponent* projectileMovement;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UCapsuleComponent* capsule;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float projectileSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float damage = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* detonationEmitter;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float groundUnitCheckDistance = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float groundUnitCheckAngle = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* groundTarget;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float desiredZ = 0.0f;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundBase* impactSound;
};