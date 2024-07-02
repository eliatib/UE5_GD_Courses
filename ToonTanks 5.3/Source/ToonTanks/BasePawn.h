// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();
	virtual void Shoot();

protected:
	// Called when the game starts or when spawned
	void RotateTurret(FVector Target);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectilSpawnerMesh;
	UPROPERTY(EditAnywhere, Category = "Timer", meta = (AllowPrivateAccess = "true"))
	float ShootSpeed = 5.f;


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMech;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(EditDefaultsOnly,Category = "Components")
	TSubclassOf<class ABullet> BulletClass;
	UPROPERTY(EditAnywhere,Category = "Effect")
	class UParticleSystem* DeathPE;
	

	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();
};
