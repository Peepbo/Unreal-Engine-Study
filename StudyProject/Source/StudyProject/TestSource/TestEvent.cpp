// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyProject/TestSource/TestEvent.h"

// Sets default values
ATestEvent::ATestEvent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestEvent::BeginPlay()
{
	Super::BeginPlay();
	
	Fuc_DeleEvent.AddUFunction(this, FName("CallDeleEventFuc_Single"));
	Fuc_DeleEvent.AddUFunction(this, FName("CallDeleEventFuc_Single"));
	Fuc_DeleEvent.AddUFunction(this, FName("CallDeleEventFuc_Single"));

	Fuc_DeleEvent.Broadcast();
}

void ATestEvent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	Fuc_DeleEvent.Clear();
}

// Called every frame
void ATestEvent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestEvent::CallDeleEventFuc_Single()
{
	UE_LOG(LogTemp, Warning, TEXT("CallDeleEventFuc_Single"));
}