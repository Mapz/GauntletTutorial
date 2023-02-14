// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "GauntletTestLoginController.generated.h"

/**
 * 
 */
UCLASS()
class GAUNTLETTUTORIAL_API UGauntletTestLoginController : public UGauntletTestController
{
	GENERATED_BODY()

	virtual void OnInit() override;
	virtual void OnTick(float TimeDelta) override;

	UFUNCTION()
	void OnClientLogin(AGameModeBase* GameMode, APlayerController* NewPlayer);
	
	int32 CurrentClientCount;
	int32 ClientCountShouldLogin;
};
