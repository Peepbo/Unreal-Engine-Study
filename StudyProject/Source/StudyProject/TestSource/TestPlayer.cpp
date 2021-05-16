// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyProject/TestSource/TestPlayer.h"

#include "Engine.h"
#include "TestDelegate.h"

// Sets default values
ATestPlayer::ATestPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (m_pTestDelegate != nullptr)
	{
		m_pTestDelegate->Fuc_DeleSingle.BindUFunction(this, FName("CallDeleFunc_Single"));

		m_pTestDelegate->ActiveDelegate();
	}
}

// Called every frame
void ATestPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATestPlayer::CallDeleFunc_Single()
{
	UE_LOG(LogTemp, Warning, TEXT("CallDeleFunc_Single"));
}