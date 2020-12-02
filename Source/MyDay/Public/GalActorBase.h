// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "GalActorBase.generated.h"

UCLASS()
class MYDAY_API AGalActorBase : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	AGalActorBase(const FObjectInitializer& ObjectInitializer);
};
