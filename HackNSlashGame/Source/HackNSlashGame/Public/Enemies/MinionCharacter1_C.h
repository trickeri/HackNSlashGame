// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MinionCharacter1_C.generated.h"

UCLASS()
class HACKNSLASHGAME_API AMinionCharacter1_C : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinionCharacter1_C();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
