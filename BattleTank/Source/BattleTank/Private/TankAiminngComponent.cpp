// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "TankBarrel.h"
#include "TankTurret.h"
#include "Projectile.h"
#include "TankAiminngComponent.h"

// Sets default values for this component's properties
UTankAiminngComponent::UTankAiminngComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

bool UTankAiminngComponent::IsBarrelMoving()
{
	if(!ensure(Barrel)) { return false; }
	//if(!Barrel) { return false; }
	auto BarrelForward = Barrel->GetForwardVector();
	return !BarrelForward.Equals(AimDirection, 0.01); // vectors are equal
}

int32 UTankAiminngComponent::GetRoundLeft() const
{
	return RoundsLeft;
}

void UTankAiminngComponent::BeginPlay()
{
	// So that first fire is after initial reload
	LastFireTime = FPlatformTime::Seconds();
}

EFiringState UTankAiminngComponent::GetFiringState() const
{
	return FiringState;
}

void UTankAiminngComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	if (RoundsLeft <= 0)
	{
		FiringState = EFiringState::OutOfAmmo;
	}
	else if((FPlatformTime::Seconds() - LastFireTime) < ReloadTimeInSeconds)
	{
		FiringState = EFiringState::Reloading;
	}
	else if(IsBarrelMoving() )
	{
		FiringState = EFiringState::Aiming;
	}
	else
	{
		FiringState = EFiringState::Locked;
	}
}

void UTankAiminngComponent::Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet)
{
	Barrel = BarrelToSet;
	Turret = TurretToSet;
}

void UTankAiminngComponent::AimAt(FVector HitLocation)
{
	//if (!ensure(Barrel)) { return ; }
	if (!Barrel) { return ; }
	
	FVector OutLaunchVelocity;
	FVector StartLocation = Barrel->GetSocketLocation(FName("Projectile"));
	bool bHaveAimSolution = UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		HitLocation,
		LaunchSpeed,
		false,
		0,
		0
		,ESuggestProjVelocityTraceOption::DoNotTrace
	);

	if(bHaveAimSolution)
	{
		AimDirection = OutLaunchVelocity.GetSafeNormal();
		MoveBarrelTowards(AimDirection);		
	}
	// If no solution found do nothing
}

void UTankAiminngComponent::MoveBarrelTowards(FVector AimDirectionBarrelTowards)
{
	if (!ensure(Barrel) || !ensure(Turret)) { return; }
	//if (!Barrel || !Turret) { return; }

	// Work-out difference between current barrel rotaion, and AimDirection
	auto BarrelRotator = Barrel->GetForwardVector().Rotation();
	auto AimAsRotator = AimDirectionBarrelTowards.Rotation();
	auto DeltaRotator = AimAsRotator - BarrelRotator;
	
	// Always yaw the shortest way
	Barrel->Elevate(DeltaRotator.Pitch); 
	if (FMath::Abs(DeltaRotator.Yaw) < 180)
	{
		Turret->Rotate(DeltaRotator.Yaw);
	}	
	else // Avoid going the long-way round
	{
		Turret->Rotate(-DeltaRotator.Yaw);
	}

}

void UTankAiminngComponent::Fire()
{
	
	if (FiringState == EFiringState::Locked || FiringState == EFiringState::Aiming)
	//if (!(FiringState == EFiringState::Locked) && !(FiringState == EFiringState::Aiming) )//|| RoundsLeft <= 0)
	{
		if (RoundsLeft <= 0) { return; }
		// Spawn a projectile at the socket location on the barrel
		if (!ensure(Barrel)) { return; }
		if (!ensure(ProjectileBlueprint)) { return; }
		auto Projectile = GetWorld()->SpawnActor<AProjectile>(
            ProjectileBlueprint,
            Barrel->GetSocketLocation(FName("Projectile")),
            Barrel->GetSocketRotation(FName("Projectile"))
		);

		Projectile->LaunchProjectile(LaunchSpeed);
		LastFireTime = FPlatformTime::Seconds();
		RoundsLeft--;
	}
}

