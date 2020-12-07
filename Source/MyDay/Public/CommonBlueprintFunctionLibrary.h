// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonBlueprintFunctionLibrary.generated.h"

class URichTextBlock;
/**
 * 
 */
UCLASS()
class MYDAY_API UCommonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RichText(URichTextBlock* RichTextBlock);
};
