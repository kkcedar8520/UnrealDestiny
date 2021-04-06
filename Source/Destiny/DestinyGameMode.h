// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/GameModeBase.h"
#include "DestinyGameMode.generated.h"

UCLASS(minimalapi)
class ADestinyGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Pawn)
	APawn * DefaultCharacter;
public:
	ADestinyGameMode();
};



