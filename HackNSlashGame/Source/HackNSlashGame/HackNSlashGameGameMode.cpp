// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HackNSlashGameGameMode.h"
#include "HackNSlashGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHackNSlashGameGameMode::AHackNSlashGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
