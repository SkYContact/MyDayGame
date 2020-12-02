// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GalDialogItem.generated.h"

class UPaperSprite;
/**
 * 
 */

UCLASS(Blueprintable, BlueprintType)
class MYDAY_API UGalPerson : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName PersonName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPaperSprite* ProfileSprite;
};

UCLASS(Blueprintable, BlueprintType)
class MYDAY_API UGalDialogItem : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UGalPerson> GalPerson;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString DialogString;
};