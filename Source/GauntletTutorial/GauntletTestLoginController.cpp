// Fill out your copyright notice in the Description page of Project Settings.


#include "GauntletTestLoginController.h"
#include "GameFramework/GameModeBase.h"

void UGauntletTestLoginController::OnInit()
{
	Super::OnInit();
	CurrentClientCount = 0;
	
	FParse::Value(FCommandLine::Get(), TEXT("ClientCountToCheck="), ClientCountShouldLogin);
	FGameModeEvents::GameModePostLoginEvent.AddUObject(this,&UGauntletTestLoginController::OnClientLogin);
	
}

void UGauntletTestLoginController::OnTick(float TimeDelta)
{
	Super::OnTick(TimeDelta);
	// 全部都登入啦
	if (CurrentClientCount == ClientCountShouldLogin)
	{
		EndTest(0);
	}
}

void UGauntletTestLoginController::OnClientLogin(AGameModeBase* GameMode, APlayerController* NewPlayer)
{
	CurrentClientCount++;
}
