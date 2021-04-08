// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterInterface.h"
#include "CharacterBase.generated.h"
////UCLASS()
////enum class Weapon
////{
////	Gun=0,
////	Sword,
////};
UCLASS()
class BASISCORE_API ACharacterBase : public ACharacter,public ICharacterInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Mesh)
		UStaticMeshComponent* StaticMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Skeleton)
		USkeletalMeshComponent* SkeletalMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack)
		UAnimInstance*	AnimInstance;


	//UPROPERTY(EditAnyWhere)
	//	Weapon	eWeapon;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attack)
		bool IsAttacking;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Jump)
		bool IsInAir;




	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;
	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
public:
	// Sets default values for this character's properties
	ACharacterBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents()override;

	virtual void MoveFoward(float Value);
	virtual void MoveRight(float Value);
	virtual void LookUp(float Value);
	virtual void Turn(float Value);
	virtual void TurnAtRate(float Rate);
	virtual void LookUpAtRate(float Rate);

public:
	//User Defined Function
	//InterfaceFunction
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	void footStep();
	virtual void footStep_Implementation();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	void AttackSound();
	virtual void AttackSound_Implementation();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "footStep")
	void AttackEffect();
	virtual void  AttackEffect_Implementation();


	virtual void Sprint()override;
	virtual void StopSprint()override;
	virtual void Attack()override;
	virtual void StopAttack()override;

};
