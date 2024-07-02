// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Turret.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATurret : public ABasePawn
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	void HandleDestruction();
private:
	UPROPERTY(EditAnywhere)
	float ShootDist = 30.f;
	class ATank* Tank;

	FTimerHandle Ftimer;
	void CheckFireCondition();
	bool PlayerInRange();

};
