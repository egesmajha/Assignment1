// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "AgentInfo.h"
#include "BaseWeapon.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	ABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	float Health;

	

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnywhere,  Category = "BirdOfPrey")
	FVector TargetLocation;


};
