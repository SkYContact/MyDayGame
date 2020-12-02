// Fill out your copyright notice in the Description page of Project Settings.


#include "PaperSpriteComponent.h"
#include "GalActorBase.h"

AGalActorBase::AGalActorBase(const FObjectInitializer& ObjectInitializer)
{
	UPaperSpriteComponent* PaperSpriteComponent = GetRenderComponent();
	if (PaperSpriteComponent)
	{
		PaperSpriteComponent->SetMobility(EComponentMobility::Movable);
	}
}