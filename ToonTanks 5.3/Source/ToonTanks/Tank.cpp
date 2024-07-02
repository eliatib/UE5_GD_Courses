// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components//InputComponent.h"
#include "Kismet/GameplayStatics.h"

ATank::ATank()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}



void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered,this,&ATank::Move);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered,this,&ATank::Shoot);
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered,this,&ATank::Rotate);
	}
}

void ATank::BeginPlay()
{
	Super::BeginPlay();
	TankPlayerController = Cast<APlayerController>(Controller);
	if(TankPlayerController)
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(TankPlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}
}

void ATank::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if(TankPlayerController)
	{
		FHitResult Hit;
		TankPlayerController->GetHitResultUnderCursor(ECC_Visibility,
			false,
			Hit);
		/**DrawDebugSphere(GetWorld(),
			Hit.Location,
			25.f,
			12,
			FColor::Emerald,
			false,
			-1.f);**/
		RotateTurret(Hit.Location);
	}

	if(ShootTime > 0)
	{
		ShootTime -= UGameplayStatics::GetWorldDeltaSeconds(this);
	}	
}

void ATank::HandleDestruction()
{
	Super::HandleDestruction();
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	bAlive = false;
}


void ATank::Move(const FInputActionInstance& Instance)
{
	FVector2D movement = Instance.GetValue().Get<FVector2D>();
	FVector DeltaLocation = FVector::ZeroVector;
	DeltaLocation.X = movement.X*Tspeed*UGameplayStatics::GetWorldDeltaSeconds(this);
	DeltaLocation.Y = movement.Y*Tspeed*UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalOffset(DeltaLocation, true);
}



void ATank::Rotate(const FInputActionInstance& Instance)
{
	float Rotation = Instance.GetValue().Get<float>();
	FRotator DeltaRotation = FRotator::ZeroRotator;
	DeltaRotation.Yaw = Rotation * RTspeed * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalRotation(DeltaRotation);
}

void ATank::Shoot()
{
	if(ShootTime <= 0)
	{
		Super::Shoot();
		ShootTime = ShootSpeed;
	}
}

