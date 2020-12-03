// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
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

USTRUCT()
struct FGalDialogItemRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UGalPerson> GalPerson;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText DialogString;
};