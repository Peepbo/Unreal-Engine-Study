// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestEvent.generated.h"

UCLASS()
class STUDYPROJECT_API ATestEvent : public AActor
{
	GENERATED_BODY()
public:
	// Event
	DECLARE_EVENT(ATestEvent, FDele_Event);

public:
	FDele_Event Fuc_DeleEvent;
	
public:	
	// Sets default values for this actor's properties
	ATestEvent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void CallDeleEventFuc_Single();
};
