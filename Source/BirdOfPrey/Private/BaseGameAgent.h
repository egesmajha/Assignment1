// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "AgentInfo.h"
#include "BaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Components/SceneComponent.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo agentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float points;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float moveSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseWeapon* weapon;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> defaultWeaponType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float health;



	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float outOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FName weaponSocketName;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	EAttachmentRule weaponAttachRule;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FVector targetLocation;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	USkeletalMeshComponent* skeletalMesh;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	UCapsuleComponent* capsule;

	UPROPERTY(VisibleAnywhere, Category = "BirdOfPrey")
	USceneComponent* weaponSpawnOffset;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* deathParticleEffect;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundCue* deathSoundCue;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundCue* hitSoundCue;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* hitParticleEffect;


};