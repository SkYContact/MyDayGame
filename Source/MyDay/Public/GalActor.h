// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GalActorBase.h"
#include "GalActor.generated.h"

UENUM(BlueprintType)
enum class EGalEmotion : uint8
{
	ENormal,
	EHappy,
	ESad,
	EAngry,
	ESuprise,
	EFear,
	ELisk,
	EDisLike,
};

UCLASS()
class MYDAY_API AGalActor : public AGalActorBase
{
	GENERATED_BODY()
	
public:	

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool SetGalEmotion(EGalEmotion InGalEmotion);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EGalEmotion GalEmotion;

private:
	bool RefreshSprite();
};
