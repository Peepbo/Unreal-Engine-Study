// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	RootComponent = SM_Ball;

	SM_Ball->SetSimulatePhysics(true);
	SM_Ball->SetEnableGravity(false);
	SM_Ball->SetConstraintMode(EDOFMode::XZPlane);
	SM_Ball->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Ball->SetCollisionProfileName(TEXT("PhsicsActor"));

	ProjetileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjetileMovement->bShouldBounce = true;
	ProjetileMovement->Bounciness = 1.1f;
	ProjetileMovement->Friction = 0.0f;
	ProjetileMovement->Velocity.X = 0.0f;
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABall::Launch()
{
	if (!BallLaunched)
	{
		SM_Ball->AddImpulse(FVector(140.0f, 0.0f, 130.0f), FName(), true);

		BallLaunched = true;
	}
}

UStaticMeshComponent* ABall::GetBall()
{
	return SM_Ball;
}