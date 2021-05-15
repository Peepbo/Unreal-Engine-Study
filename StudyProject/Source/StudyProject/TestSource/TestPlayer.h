// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestPlayer.generated.h"

// SingleCast
DECLARE_DELEGATE(FDele_Single);
DECLARE_DELEGATE_OneParam(FDele_Single_OneParam, int32);

UCLASS()
class STUDYPROJECT_API ATestPlayer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATestPlayer();

	FDele_Single Fuc_DeleSingle;
	FDele_Single_OneParam Fuc_DeleSingle_OneParam;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void CallDeleFunc_Single();

	UFUNCTION()
		void CallDeleFunc_Single2();

	UFUNCTION()
		void CallDeleFunc_Signle_OneParam(int32 value);
};
