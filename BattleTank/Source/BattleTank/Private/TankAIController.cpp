// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAiminngComponent.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();
	if (!ensure(PlayerTank && ControlledTank)) { return; }
	
	// Move towards the player
	MoveToActor(PlayerTank, AcceptanceRadius); // TODO check radius is in cm
	// Aim towards the player
	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAiminngComponent>();
	AimingComponent->AimAt(PlayerTank->GetActorLocation());


	AimingComponent->Fire();  // TODO limit firing rate
	
}