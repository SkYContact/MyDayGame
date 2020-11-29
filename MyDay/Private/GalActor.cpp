// Fill out your copyright notice in the Description page of Project Settings.


#include "GalActor.h"

// Sets default values
AGalActor::AGalActor()
{
	PaperSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GalCharacterSprite"));
}

void AGalActor::BeginPlay()
{
	RefreshSprite();
}

bool AGalActor::SetGalEmotion(EGalEmotion InGalEmotion)
{
	if (InGalEmotion == GalEmotion)
	{
		return false;
	}
	GalEmotion = InGalEmotion;
	return RefreshSprite();
}

bool AGalActor::RefreshSprite()
{
	return true;
}