// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StudyProjectHUD.generated.h"

UCLASS()
class AStudyProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AStudyProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

