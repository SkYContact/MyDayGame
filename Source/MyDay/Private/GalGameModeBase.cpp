// Fill out your copyright notice in the Description page of Project Settings.


#include "GalGameModeBase.h"
#include "DSP/VolumeFader.h"
#include "AudioDevice.h"
#include "ActiveSound.h"
#include "Components/AudioComponent.h"
#include "Sound/AmbientSound.h"

void AGalGameModeBase::BeginPlay()
{
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

void AGalGameModeBase::PlayBGM(USoundWave* BGMSound)
{
	UWorld* World = GetWorld();
	FAudioDevice* AudioDevice = World->GetAudioDeviceRaw();
	if (!AudioDevice)
	{
		return;
	}
	FActiveSound NewActiveSound;
	NewActiveSound.SetSound(BGMSound);
	NewActiveSound.SetWorld(World);
	NewActiveSound.bIsUISound = true;
	NewActiveSound.bAllowSpatialization = false;
	NewActiveSound.SetOwner(this);
	Audio::FVolumeFader& Fader = NewActiveSound.ComponentVolumeFader;
	Fader.SetVolume(0.0f); // Init to 0.0f to fade as default is 1.0f
 	Fader.StartFade(1.0f, 1.0f, Audio::EFaderCurve::Linear);
	AudioDevice->AddNewActiveSound(NewActiveSound);
}