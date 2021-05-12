// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestPawn.generated.h"

UCLASS()
class STUDYPROJECT_API ATestPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestPawn();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ABPawnComponent")
		class UCapsuleComponent* Body = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ABPawnComponent")
		class USkeletalMeshComponent* SkelMesh = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ABPawnComponent")
		class UArrowComponent* Arrow = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ABPawnComponent")
		class USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ABPawnComponent")
		class UCameraComponent* Camera = nullptr;

	UPROPERTY(BlueprintReadOnly)
		int32 BlueprintReadOnly;

	UPROPERTY(BlueprintReadWrite)
		int32 BlueprintReadWrite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
