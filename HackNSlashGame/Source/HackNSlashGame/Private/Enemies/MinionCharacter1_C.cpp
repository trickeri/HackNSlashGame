// Fill out your copyright notice in the Description page of Project Settings.

#include "MinionCharacter1_C.h"

// Sets default values
AMinionCharacter1_C::AMinionCharacter1_C()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMinionCharacter1_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinionCharacter1_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMinionCharacter1_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

