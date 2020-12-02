// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
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
	UPROPERTY(BlueprintReadOnly)
	APlayerController* PlayerController;
	UPROPERTY(BlueprintReadOnly)
	AAmbientSound* BGMAmbientSound;
	UPROPERTY(BlueprintReadOnly)
	AAmbientSound* SoundAmbientSound;
};