// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Health.h"

#include "TTGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UAC_Health::UAC_Health()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_Health::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	// ...
	GetOwner()->OnTakeAnyDamage.AddDynamic(this,&UAC_Health::DamageTaken);
	TTGamemode = Cast<ATTGameMode>(UGameplayStatics::GetGameMode(this));
}


void UAC_Health::DamageTaken(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* Instigator,
	AActor* DamageCauser)
{
	UE_LOG(LogTemp,Warning,TEXT("Health - %f"),Damage);
	if(Damage <= 0) return;
	CurrentHealth -= Damage;

	if(CurrentHealth <= 0 && TTGamemode)
	{
		TTGamemode->ActorDied(DamageActor);
	}
}

// Called every frame
void UAC_Health::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

