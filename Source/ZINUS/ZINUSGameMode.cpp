// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZINUSGameMode.h"
#include "ZINUSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZINUSGameMode::AZINUSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
