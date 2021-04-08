// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticActor.h"

// Sets default values
AStaticActor::AStaticActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ChunkMesh = CreateDefaultSubobject< UDestructibleComponent>(TEXT("DESTRUCTMESH"));
	Mesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("MESH"));

	RootComponent = Mesh;
	ChunkMesh->SetupAttachment(Mesh);

	
}

// Called when the game starts or when spawned
void AStaticActor::BeginPlay()
{
	Super::BeginPlay();
	UDestructibleMesh* DMesh=ChunkMesh->GetDestructibleMesh();
	DMesh->DefaultDestructibleParameters.DamageParameters.DamageThreshold = 1000.0f;
	DMesh->DefaultDestructibleParameters.DamageParameters.DamageSpread = 1.0f;
	DMesh->DefaultDestructibleParameters.DamageParameters.bEnableImpactDamage = true;
	DMesh->DefaultDestructibleParameters.DamageParameters.ImpactDamage = 0.0f;
	DMesh->DefaultDestructibleParameters.DebrisParameters.DebrisLifetimeMax = 1.0f;
	DMesh->DefaultDestructibleParameters.DebrisParameters.DebrisLifetimeMax = 3.0f;
	DMesh->DefaultDestructibleParameters.Flags.bDebrisTimeout = true;
	DMesh->DefaultDestructibleParameters.SpecialHierarchyDepths.bEnableDebris = true;
	DMesh->DefaultDestructibleParameters.SpecialHierarchyDepths.DebrisDepth = 1;

}

// Called every frame
void AStaticActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

