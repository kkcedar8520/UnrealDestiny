// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"WeaponInterface.h"
#include"GunWeaponInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGunWeaponInterface : public UWeaponInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BASISCORE_API IGunWeaponInterface
{
	GENERATED_BODY()
public:

	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	//void AttackSound();
	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	//void AtaackEffect();
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
