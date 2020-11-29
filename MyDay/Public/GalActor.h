// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "GalDefine.h"
#include "GalActor.generated.h"

UCLASS()
class MYDAY_API AGalActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGalActor();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool SetGalEmotion(EGalEmotion InGalEmotion);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EGalEmotion GalEmotion;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPaperSpriteComponent* PaperSpriteComponent;

private:
	bool RefreshSprite();
};
