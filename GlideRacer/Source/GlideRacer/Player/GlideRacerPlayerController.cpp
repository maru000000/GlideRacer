// Copyright Epic Games, Inc. All Rights Reserved.


#include "GlideRacerPlayerController.h"
#include "GlideRacerPawn.h"
#include "GlideRacerUI.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void AGlideRacerPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// spawn the UI widget and add it to the viewport
	VehicleUI = CreateWidget<UGlideRacerUI>(this, VehicleUIClass);

	check(VehicleUI);

	VehicleUI->AddToViewport();
}

void AGlideRacerPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		// optionally add the steering wheel context
		if (bUseSteeringWheelControls && SteeringWheelInputMappingContext)
		{
			Subsystem->AddMappingContext(SteeringWheelInputMappingContext, 1);
		}
	}
}

void AGlideRacerPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}
}

void AGlideRacerPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehiclePawn = CastChecked<AGlideRacerPawn>(InPawn);
}
