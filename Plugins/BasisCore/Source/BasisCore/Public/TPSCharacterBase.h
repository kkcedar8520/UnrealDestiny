// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include"CharacterAnimInstance.h"
#include "CharacterBase.h"
#include"CharacterInterface.h"
#include "TPSCharacterBase.generated.h"
UCLASS()
class BASISCORE_API ATPSCharacter : public ACharacterBase
{



	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSCharacter();
public:


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sprint)
	bool bSprint;
protected:
	// Called when the game starts or when spawned


	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents()override;

	virtual void MoveFoward(float Value)override;
	virtual void MoveRight(float Value)override;
	virtual void LookUp(float Value)override;
	virtual void Turn(float Value)override;
	virtual void TurnAtRate(float Rate)override;
	virtual void LookUpAtRate(float Rate)override;

public:
	//User Defined Function
	void Sprint()override;
	void StopSprint()override;
	void Attack()override;
	void StopAttack()override;

	//interface Function
	virtual void footStep_Implementation()override;
	virtual void AttackSound_Implementation()override;
	virtual void AttackEffect_Implementation()override;

	UFUNCTION()
	virtual void OnAttackMontageEnded(UAnimMontage* Motage,bool bInterrupted);
protected:

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

public:
};


