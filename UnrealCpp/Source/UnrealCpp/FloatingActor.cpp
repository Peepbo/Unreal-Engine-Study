// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = FVector(1.0f, 1.0f, 1.0f);
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation(); // FVector 위치, 속도를 가지고있는 벡터
	FVector Delta;
	Delta.X = (FMath::Sin(RunningTime.X + DeltaTime * Speed.X) - FMath::Sin(RunningTime.X));
	Delta.Y = (FMath::Sin(RunningTime.Y + DeltaTime * Speed.Y) - FMath::Sin(RunningTime.Y));
	Delta.Z = (FMath::Sin(RunningTime.Z + DeltaTime * Speed.Z) - FMath::Sin(RunningTime.Z));
	NewLocation += Delta * 20.0f;
	//NewLocation.X += 30.0f * DeltaTime * 1.4f;
	RunningTime += DeltaTime * Speed; //Unity의 Time.deltaTime과 같음

	SetActorLocation(NewLocation);
}

