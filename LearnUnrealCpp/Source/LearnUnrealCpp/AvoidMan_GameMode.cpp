// Fill out your copyright notice in the Description page of Project Settings.


#include "AvoidMan_GameMode.h"
#include "GameFramework/Actor.h"

AAvoidMan_GameMode::AAvoidMan_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAvoidMan_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &AAvoidMan_GameMode::SpawnPlayerRecharge,
		FMath::RandRange(0.5f, 1.0f), true);
}

void AAvoidMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAvoidMan_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);
	
	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	
	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}