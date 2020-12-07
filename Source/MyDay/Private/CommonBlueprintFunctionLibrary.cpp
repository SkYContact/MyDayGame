// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonBlueprintFunctionLibrary.h"
#include "Components/RichTextBlock.h"

void UCommonBlueprintFunctionLibrary::RichText(URichTextBlock* RichTextBlock)
{
	if (RichTextBlock)
	{
		UE_LOG(LogTemp,Warning, TEXT("%s"), *RichTextBlock->GetText().ToString())
	}
}