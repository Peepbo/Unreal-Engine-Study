// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyProject/TestSource/TestPlayer.h"

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
	
	Fuc_DeleSingle.BindLambda(this, ATestPlayer::CallDeleFunc_Single);
	//Fuc_DeleSingle.BindUFunction(this, FName("CallDeleFunc_Single"));

	Fuc_DeleSingle_OneParam.BindUFunction(this, FName("CallDeleFunc_Signle_OneParam"));
	
	if (Fuc_DeleSingle.IsBound()) Fuc_DeleSingle.Execute();
	if (Fuc_DeleSingle_OneParam.IsBound()) Fuc_DeleSingle_OneParam.Execute(123);
}

void ATestPlayer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	Fuc_DeleSingle.Unbind();
	Fuc_DeleSingle_OneParam.Unbind();
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

void ATestPlayer::CallDeleFunc_Single2()
{
	UE_LOG(LogTemp, Warning, TEXT("CallDeleFunc_Single 2"));
}

void ATestPlayer::CallDeleFunc_Signle_OneParam(int32 value)
{
	UE_LOG(LogTemp, Warning, TEXT("CallDeleFunc_Single_OneParam / %d"), value);
}
