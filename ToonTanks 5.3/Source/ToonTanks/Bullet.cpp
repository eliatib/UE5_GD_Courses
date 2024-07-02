// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));
	RootComponent = BulletMesh;
	
	BulletMovComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet Move"));
	BulletMovComp->MaxSpeed = 1300.f;
	BulletMovComp->InitialSpeed = 1300.f;

	BulletTrailPE = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bullet Trail"));
	BulletTrailPE->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::PlaySoundAtLocation(this,ShootSFX,GetActorLocation());
	BulletMesh->OnComponentHit.AddDynamic(this, &ABullet::OnHit);
}

void ABullet::OnHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
	const FHitResult& Hit)
{
	UE_LOG(LogTemp,Warning,TEXT("Hit"));
	auto MyOwner = GetOwner();
	if(MyOwner == nullptr || Other == this || Other == MyOwner) return;
	UE_LOG(LogTemp,Warning,TEXT("Hit %s"), *Other->GetName());
	UGameplayStatics::ApplyDamage(Other,Damage,MyOwner->GetInstigatorController(),this,UDamageType::StaticClass());
	UGameplayStatics::SpawnEmitterAtLocation(this,HitPE,GetActorLocation(), GetActorRotation());
	UGameplayStatics::PlaySoundAtLocation(this,ExplodeSFX,GetActorLocation());
	if(CamShake)
	{
		UE_LOG(LogTemp,Warning,TEXT("Play Shake"));
		GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(CamShake);
	}
	Destroy();
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

