// Fill out your copyright notice in the Description page of Project Settings.


#include "Sound/AmbientSound.h"
#include "GalGameModeBase.h"

void AGalGameModeBase::BeginPlay()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->bShowMouseCursor = true;
	BGMAmbientSound = GetWorld()->SpawnActor<AAmbientSound>();
	SoundAmbientSound = GetWorld()->SpawnActor<AAmbientSound>();
	Super::BeginPlay();
}