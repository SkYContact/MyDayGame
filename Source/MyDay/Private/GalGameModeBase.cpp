// Fill out your copyright notice in the Description page of Project Settings.


#include "GalGameModeBase.h"
#include "Components/AudioComponent.h"
#include "Sound/AmbientSound.h"

void AGalGameModeBase::BeginPlay()
{
	BGActor = GetWorld()->SpawnActor<AGalActorBase>(BGActorBase);
	if (BGActor != nullptr)
	{
		BGActor->SetActorLocation(FVector(0, BGDepth, 0));
	}
	AmbientSound_One = GetWorld()->SpawnActor<AAmbientSound>();
	AmbientSound_Two = GetWorld()->SpawnActor<AAmbientSound>();
	ActiveAmbientSound = nullptr;
	Super::BeginPlay();
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController != nullptr)
	{
		PlayerController->bShowMouseCursor = true;
	}
	UUserWidget* MainUserWidget = CreateWidget<UUserWidget>(GetWorld(), MainUI);
	if (MainUserWidget != nullptr)
	{
		MainUserWidget->AddToViewport();
	}
}

void AGalGameModeBase::PlayBGM(USoundWave* BGMSound, float FadeDuration)
{
	if (BGMSound == nullptr)
	{
		return;
	}
	float FadeInDuration = 0.0f;
	if (ActiveAmbientSound)
	{
		ActiveAmbientSound->FadeOut(FadeDuration, 0.0f);
		FadeInDuration = FadeDuration;
	}
	if (ActiveAmbientSound == AmbientSound_One)
	{
		ActiveAmbientSound = AmbientSound_Two;
	}
	else
	{
		ActiveAmbientSound = AmbientSound_One;
	}
	BGMSound->bLooping = true;
	UAudioComponent* AudioComponent = ActiveAmbientSound->GetAudioComponent();
	if (AudioComponent != nullptr)
	{
		AudioComponent->SetSound(BGMSound);
	}
	ActiveAmbientSound->FadeIn(FadeDuration, 1.0f);
}