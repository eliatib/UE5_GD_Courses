// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATurret::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if(PlayerInRange())
	{
			RotateTurret(Tank->GetActorLocation());
	}	
}

void ATurret::BeginPlay()
{
	Super::BeginPlay();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this,0));
	GetWorldTimerManager().SetTimer(Ftimer, this, &ATurret::CheckFireCondition, ShootSpeed, true);
}

void ATurret::CheckFireCondition()
{
	if(PlayerInRange() && Tank && Tank->bAlive)
	{
		Shoot();
	}
}

bool ATurret::PlayerInRange()
{
	if(Tank)
	{
		float dist = FVector::Dist(GetActorLocation(),Tank->GetActorLocation());
		//tank in range ?
		return dist <= ShootDist;
	}
	return false;
}

void ATurret::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}
