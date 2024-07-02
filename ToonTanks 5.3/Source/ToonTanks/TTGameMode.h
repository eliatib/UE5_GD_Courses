// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TTGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATTGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	void ActorDied(AActor* DeadA);
protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool bWonGame);
private:
	class ATank* Tank;
	class ATTPlayerController* PlayerController;
	float StartDelay = 3.f;
	int32 EnnemiesNumber = 0;
	int32 GetEnnemyCount();
	void HandlGameStart();
};
