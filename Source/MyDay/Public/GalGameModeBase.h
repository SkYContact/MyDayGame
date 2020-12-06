// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Blueprint/UserWidget.h"
#include "GalActorBase.h"
#include "GalGameModeBase.generated.h"

class AAmbientSound;
/**
 * 
 */
UCLASS()
class MYDAY_API AGalGameModeBase : public AGameMode
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void PlayBGM(USoundWave* BGMSound, float FadeDuration = 0.2f);

	UPROPERTY(BlueprintReadOnly)
	APlayerController* PlayerController;

	UPROPERTY(BlueprintReadOnly)
	AGalActorBase* BGActor;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<UUserWidget> MainUI;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<AGalActorBase> BGActorBase;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere)
	float BGDepth = -100;

	UPROPERTY(BlueprintReadOnly)
	AAmbientSound* AmbientSound_One;

	UPROPERTY(BlueprintReadOnly)
	AAmbientSound* AmbientSound_Two;

	UPROPERTY(BlueprintReadOnly)
	AAmbientSound* ActiveAmbientSound;
};
