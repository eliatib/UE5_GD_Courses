// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "InputAction.h"
#include "Tank.generated.h"

UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:
	ATank();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Tick(float DeltaSeconds) override;
	void HandleDestruction();
	UPROPERTY(EditAnywhere)
	float Tspeed = 5.f;
	UPROPERTY(EditAnywhere)
	float RTspeed = 50.f;

	float bAlive = true;


protected:
	virtual void BeginPlay() override;	
private:

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Tank Only", meta = (AllowPrivateAccess = true))
	class USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Tank Only", meta = (AllowPrivateAccess = true))
	class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, Category = "Timer", meta = (AllowPrivateAccess = "true"))
	float ShootTime = 0.f;
	

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	class UInputMappingContext* InputMapping;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	class UInputAction* MoveAction;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	class UInputAction* ShootAction;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = true))
	class UInputAction* RotateAction;
		
	void Move(const FInputActionInstance& Instance);

	void Rotate(const FInputActionInstance& Instance);

	virtual void Shoot() override;

	APlayerController* TankPlayerController;

public:
	[[nodiscard]] APlayerController* GetTankPlayerController() const
	{
		return TankPlayerController;
	}
};
