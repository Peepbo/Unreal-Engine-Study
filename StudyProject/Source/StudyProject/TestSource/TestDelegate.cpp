// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyProject/TestSource/TestDelegate.h"

// Sets default values
ATestDelegate::ATestDelegate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestDelegate::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestDelegate::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	Fuc_DeleSingle.Unbind();
}

// Called every frame
void ATestDelegate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestDelegate::ActiveDelegate()
{
	if (Fuc_DeleSingle.IsBound()) Fuc_DeleSingle.Execute();
}

