// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class BASISCORE_API ICharacterInterface
{
	GENERATED_BODY()
public:

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	void footStep();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AttackSound")
	void AttackSound();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AttackEffect")
	void AttackEffect();


	virtual void Sprint();
	virtual void StopSprint();
	virtual void Attack();
	virtual void StopAttack();
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
