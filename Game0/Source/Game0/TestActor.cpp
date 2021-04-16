// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

#include "Components/StaticMeshComponent.h"
//#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("abc"));

	Box_Collision = CreateDefaultSubobject<USphereComponent>(TEXT("def"));

	RootComponent = Box_Collision;
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	Box_Collision->OnComponentBeginOverlap.AddDynamic(this, &ATestActor::OnOverlapBegin);
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestActor::PrintName(int num)
{
	UE_LOG(LogTemp, Log, TEXT("%d"), num);
}

void ATestActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OterComp, int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("COL!"));
	Box_Collision->SetEnableGravity(true);

}