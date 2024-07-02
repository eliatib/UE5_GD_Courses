// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"

#include "Bullet.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = CapsuleComp;
	BaseMech =  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tank"));
	BaseMech->SetupAttachment(CapsuleComp);
	TurretMesh =  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tank Turret"));
	TurretMesh->SetupAttachment(BaseMech);
	ProjectilSpawnerMesh =  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil Spawner"));
	ProjectilSpawnerMesh->SetupAttachment(TurretMesh);
	
}

void ABasePawn::RotateTurret(FVector Target)
{
	FVector ToTarget = Target - TurretMesh->GetComponentLocation();
	
	FRotator Look = FRotator(0.f,ToTarget.Rotation().Yaw,0.f);

	TurretMesh->SetWorldRotation(
		FMath::RInterpTo(TurretMesh->GetComponentRotation(),
			Look,
			UGameplayStatics::GetWorldDeltaSeconds(this),
			10.f));
}

void ABasePawn::Shoot()
{
		/**DrawDebugSphere(GetWorld(),
				ProjectilSpawnerMesh->GetComponentLocation(),
				25.f,
				12,
				FColor::Red,
				false,
				5.f);**/
	auto Bullet = GetWorld()->SpawnActor<ABullet>(BulletClass,ProjectilSpawnerMesh->GetComponentLocation(),ProjectilSpawnerMesh->GetComponentRotation());

	Bullet->SetOwner(this);
}


// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePawn::HandleDestruction()
{
	// TODO VISUAL + SFX + Destruction
	UGameplayStatics::SpawnEmitterAtLocation(this,DeathPE,GetActorLocation(),GetActorRotation());
}







