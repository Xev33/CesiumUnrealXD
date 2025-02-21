// Copyright Epic Games, Inc. All Rights Reserved.

#include "LandscapeCombinatorGameMode.h"
#include "LandscapeCombinatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandscapeCombinatorGameMode::ALandscapeCombinatorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
