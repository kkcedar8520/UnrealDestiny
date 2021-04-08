// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestructibleMesh.h"
#include "DestructibleComponent.h"
#include "StaticActor.generated.h"

UCLASS()
class BASISCORE_API AStaticActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStaticActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collector)
	UStaticMeshComponent*  Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collector)
	UDestructibleComponent*  ChunkMesh;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
