// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLogActor.h"
#include "UnrealCpp.h"

// Sets default values
AMyLogActor::AMyLogActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyLogActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Error, TEXT("Error Message"));
	UE_LOG(LogTemp, Warning, TEXT("Warning Message"));
	UE_LOG(LogTemp, Display, TEXT("Display Message"));

	UE_LOG(MyLogCategory, Log, TEXT("My Category Log"));

	FString CharacterName = TEXT("Hiwer");
	UE_LOG(LogTemp, Log, TEXT("Character Name = %s"), *CharacterName); //CharacterName의 주소를 사용

	bool isAttackable = true;
	UE_LOG(LogTemp, Log, TEXT("Is Attackalbe = %s"), isAttackable ? TEXT("true") : TEXT("false"));
	
	int hp = 100;
	UE_LOG(LogTemp, Log, TEXT("HP = %d"), hp);

	float AttackSpeed = 1.0f;
	UE_LOG(LogTemp, Log, TEXT("Attack Speed = %f"), AttackSpeed);

	FVector CharacterPosition = GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("Position = %s"), *CharacterPosition.ToString());

	UE_LOG(LogTemp, Log, TEXT("Character Name = %s, HP = %d, Attack Speed = %f"),
		*CharacterName, hp, AttackSpeed);
}

// Called every frame
void AMyLogActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

