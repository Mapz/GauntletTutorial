// Copyright Epic Games, Inc. All Rights Reserved.

#include "GauntletTutorialGameMode.h"
#include "GauntletTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGauntletTutorialGameMode::AGauntletTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
