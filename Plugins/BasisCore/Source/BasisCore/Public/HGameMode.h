// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Components/Widget.h"
#include "Blueprint/UserWidget.h"
#include "HGameMode.generated.h"


/**
 * 
 */
UCLASS()
class BASISCORE_API AHGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay()override;
public:
	UFUNCTION()
		bool LoginServer(const FText& id, const FText& pw);
	
	UPROPERTY()
	UUserWidget* Widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
		TSubclassOf<UUserWidget> WidgetClass;
public:
	AHGameMode();
};
