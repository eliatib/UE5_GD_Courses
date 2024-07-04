// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	/*auto  PhysHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	/PhysHandle = nullptr;
	if (PhysHandle != nullptr)
	{
		PhysHandle->GetName();
	}
	*/
	// ...
}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent* PhysicHandle = GetPhysicsHandle();
	if (PhysicHandle && PhysicHandle->GetGrabbedComponent())
	{
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}

void UGrabber::Release()
{
	UE_LOG(LogTemp, Display, TEXT("Release grabber"));
	UPhysicsHandleComponent* PhysicHandle = GetPhysicsHandle();
	if (PhysicHandle && PhysicHandle->GetGrabbedComponent() != nullptr)
	{
		AActor* GrabbedActor = PhysicHandle->GetGrabbedComponent()->GetOwner();
		GrabbedActor->Tags.Remove("Grabbed");
		PhysicHandle->ReleaseComponent();
	}
}

void UGrabber::Grab()
{
	FHitResult Hit;
	if (GetGrabbableInReach(Hit))
	{
		UPhysicsHandleComponent* PhysicHandle = GetPhysicsHandle();
		if (PhysicHandle == nullptr)
		{
			return;
		}
		Hit.GetActor()->Tags.Add("Grabbed");
		UPrimitiveComponent* HitComponent = Hit.GetComponent();
		HitComponent->WakeAllRigidBodies();
		PhysicHandle->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			Hit.ImpactPoint,
			GetComponentRotation()
		);
		/*
		AActor* HitActor = Hit.GetActor();
		DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 10, 10, FColor::Green, false, 5);
		UE_LOG(LogTemp, Display, TEXT("Hit : % s"), *HitActor->GetActorNameOrLabel());
		*/
	}
}

UPhysicsHandleComponent* UGrabber::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (Result == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No UPhysicsHandleComponent find."));
	}
	return Result;
}

bool UGrabber::GetGrabbableInReach(FHitResult& HitResult) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGabDist;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	return GetWorld()->SweepSingleByChannel
	(
		HitResult,
		Start,
		End,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		Sphere
	);
}