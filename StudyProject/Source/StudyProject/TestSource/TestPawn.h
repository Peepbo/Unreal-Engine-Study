// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestPawn.generated.h"

UCLASS()
class STUDYPROJECT_API ATestPawn : public APawn
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintPure)
		int32 SumPure(int32 aValue, int32 bValue);

	UFUNCTION(BlueprintCallable)
		int32 SumCallable(int32 aValue, int32 bValue);

public:
	// Sets default values for this pawn's properties
	ATestPawn();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
