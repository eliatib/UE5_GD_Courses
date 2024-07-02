// Fill out your copyright notice in the Description page of Project Settings.


#include "TTGameMode.h"

#include "Tank.h"
#include "TTPlayerController.h"
#include "Turret.h"
#include "Kismet/GameplayStatics.h"

void ATTGameMode::ActorDied(AActor* DeadA)
{
	if(DeadA == Tank)
	{
		
		Tank->HandleDestruction();
		GameOver(false);
		if(Tank->GetTankPlayerController())
		{
			PlayerController->SetPlayerEnableState(false);
		}
	}
	else if(ATurret* DTurret =  Cast<ATurret>(DeadA))
	{
		EnnemiesNumber--;
		DTurret->HandleDestruction();
		if(EnnemiesNumber <= 0)
		{
			GameOver(true);
		}
	}
}

void ATTGameMode::BeginPlay()
{
	Super::BeginPlay();
	EnnemiesNumber = GetEnnemyCount();
	HandlGameStart();
}

int32 ATTGameMode::GetEnnemyCount()
{
	TArray<AActor*> turrets;
	UGameplayStatics::GetAllActorsOfClass(this,ATurret::StaticClass(),turrets);	
	return turrets.Num();
}

void ATTGameMode::HandlGameStart()
{
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this,0));
	PlayerController = Cast<ATTPlayerController>(UGameplayStatics::GetPlayerController(this,0));

	StartGame();
	
	if(PlayerController)
	{
		PlayerController->SetPlayerEnableState(false);

		FTimerHandle PlayerEnableTimerHandle;
		FTimerDelegate InputDelegate = FTimerDelegate::CreateUObject(PlayerController,&ATTPlayerController::SetPlayerEnableState,true);
		GetWorldTimerManager().SetTimer(PlayerEnableTimerHandle,InputDelegate,StartDelay,false);
		
	}
}
