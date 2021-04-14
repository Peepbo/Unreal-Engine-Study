// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanPawn.h"

// Sets default values
APacmanPawn::APacmanPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APacmanPawn::SetDirection(const FVector Direction)
{
}

void APacmanPawn::OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor)
{
}

