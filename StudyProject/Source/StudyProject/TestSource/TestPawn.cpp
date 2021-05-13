// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyProject/TestSource/TestPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ATestPawn::ATestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestPawn::BeginPlay()
{
	Super::BeginPlay();
	
	ImplementableEventVoid();
	ImplementableEventBool();

	NativeEvent();
}

// Called every frame
void ATestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

int32 ATestPawn::SumPure(int32 aValue, int32 bValue)
{
	return aValue + bValue;
}

int32 ATestPawn::SumCallable(int32 aValue, int32 bValue)
{
	return aValue + bValue;
}

void ATestPawn::NativeEvent_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("CPP"));
}