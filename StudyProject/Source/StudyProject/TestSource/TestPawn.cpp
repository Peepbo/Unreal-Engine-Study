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

	// Collision - CapsuleComponent
	Body = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ATestPawnCapsuleComponent"));
	
	check(Body);
	Body->SetCapsuleSize(34.f, 88.f);

	// set as RootComponent
	RootComponent = Body;

	// Rendering - SkeletalMeshComponent
	SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ATestPawnSkeletalMeshComponent"));
	check(SkelMesh);

	SkelMesh->SetRelativeLocationAndRotation(
		FVector(0.f, 0.f, -88.f),
		FRotator(0.f, -90.f, 0.f)
	);

	SkelMesh->SetupAttachment(RootComponent);

	// ArrowComponent
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ATestPawnArrowComponent"));
	check(Arrow);
	// Attacth to RootComponent
	Arrow->SetupAttachment(RootComponent);

	// SpringArmComponent
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ATestPawnSpringArmComponent"));
	check(SpringArm);

	SpringArm->TargetArmLength = 650.f;
	// Pitch
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	// Disable inherit
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	// Attacth to RootComponent
	SpringArm->SetupAttachment(RootComponent);

	// CameraComponent
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ATestPawnCameraComponent"));
	check(Camera);
	// Attacth to SpringArmComponent
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ATestPawn::BeginPlay()
{
	Super::BeginPlay();
	
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

