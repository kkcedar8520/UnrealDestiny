// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance()
{
	
	Speed=0.0f;
	Direction = 0.0f;
	Yaw = 0.0f;
	Pitch = 0.0f;
	Roll = 0.0f;
	IsInAir = false;
	IsAttacking = false;

	AttackMontage = CreateDefaultSubobject< UAnimMontage>(TEXT("AttackMontage"));

		
}
void UCharacterAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	Character = Cast<ACharacter>(TryGetPawnOwner());

}
void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (::IsValid(Character))
	{
		FVector Velocity = Character->GetVelocity();
		FRotator Rotation = Character->GetActorRotation();
		Speed = Velocity.Size();
		Direction = CalculateDirection(Velocity, Rotation);
		IsInAir = Character->GetCharacterMovement()->IsFalling();
		
	}
			
}
void UCharacterAnimInstance::PlayAttackMontage()
{
	if (::IsValid(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.0f);
		

	}
}