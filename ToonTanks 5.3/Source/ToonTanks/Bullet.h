// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

class USoundBase;

UCLASS()

class TOONTANKS_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

private:
	UPROPERTY(EditAnywhere)
	float Damage = 50.f;
	UPROPERTY(EditAnywhere, Category="Effect" )
	class UParticleSystem* HitPE;
	UPROPERTY(EditAnywhere, Category="Effect" )
	class UParticleSystemComponent* BulletTrailPE;
	UPROPERTY(EditAnywhere,Category = "Effect")
	USoundBase* ShootSFX;
	UPROPERTY(EditAnywhere,Category = "Effect")
	USoundBase* ExplodeSFX;
	UPROPERTY(EditAnywhere,Category = "Effect")
	class TSubclassOf<UCameraShakeBase> CamShake;	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BulletMesh;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	class UProjectileMovementComponent* BulletMovComp;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
