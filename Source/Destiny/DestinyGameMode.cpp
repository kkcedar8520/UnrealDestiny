// Copyright Epic Games, Inc. All Rights Reserved.

#include "DestinyGameMode.h"
#include "UObject/ConstructorHelpers.h"

ADestinyGameMode::ADestinyGameMode()
{
	 //set default pawn class to our Blueprinted character
	DefaultCharacter=CreateDefaultSubobject<APawn>(TEXT("Character"));
	
	if (DefaultCharacter!= nullptr)
	{
		DefaultPawnClass = DefaultCharacter->GetClass();
	}
}
