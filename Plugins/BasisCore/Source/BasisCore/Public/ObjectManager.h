// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include"StaticActor.h"
#include "ObjectManager.generated.h"


DECLARE_DELEGATE(FObjetSpread)
UCLASS()
class BASISCORE_API AObjectManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	FObjetSpread ObjectSpread;
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = Collector)
		TArray<TSubclassOf<AStaticActor>> ObjectCollector;

public:
	void OnObjectSpread();
};
