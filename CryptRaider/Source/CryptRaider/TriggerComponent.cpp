// Fill out your copyright notice in the Description page of Project Settings.

#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UTriggerComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Key = GetAcceptableActor();
	if (Key != nullptr && Movable != nullptr)
	{
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(Key->GetRootComponent());
		if (Component != nullptr)
		{
			Component->SetSimulatePhysics(false);
		}
		UActorComponent* MoverComponent = Movable->GetComponentByClass(UMover::StaticClass());
		UMover* Mover = Cast<UMover>(MoverComponent);
		Key->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		Mover->SetShouldMove(true);
	}
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	for (AActor* Actor : Actors)
	{
		if (Actor->ActorHasTag("Unlock1") && !Actor->ActorHasTag("Grabbed"))
		{
			return Actor;
		}
	}
	return nullptr;
}