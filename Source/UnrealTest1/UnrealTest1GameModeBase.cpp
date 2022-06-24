// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealTest1GameModeBase.h"
#include "UnrealTestCharacter.h"

AUnrealTest1GameModeBase::AUnrealTest1GameModeBase() {
	DefaultPawnClass = AUnrealTestCharacter::StaticClass();
}