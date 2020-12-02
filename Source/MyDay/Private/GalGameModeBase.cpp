// Fill out your copyright notice in the Description page of Project Settings.


#include "GalGameModeBase.h"
#include "Sound/AmbientSound.h"

void AGalGameModeBase::BeginPlay()
{
	BGMAmbientSound = GetWorld()->SpawnActor<AAmbientSound>();
	SoundAmbientSound = GetWorld()->SpawnActor<AAmbientSound>();
	BGActor = GetWorld()->SpawnActor<AGalActorBase>(BGActorBase);
	if (BGActor)
	{
		BGActor->SetActorLocation(FVector(0, BGDepth, 0));
	}
	Super::BeginPlay();
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true;
	}
	UUserWidget* MainUserWidget = CreateWidget<UUserWidget>(GetWorld(), MainUI);
	if (MainUserWidget)
	{
		MainUserWidget->AddToViewport();
	}
}