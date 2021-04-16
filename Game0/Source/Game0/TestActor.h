// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

//class UBoxComponent;
class USphereComponent;

UCLASS()
class GAME0_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Brick;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* Box_Collision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PrintName(int num);

	//UFUNCTION()
	//	void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OterComp,
			int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SweepResult);
};
