// Copyright Epic Games, Inc. All Rights Reserved.


#include "GlideRacerSportsCar.h"
#include "GlideRacerSportsWheelFront.h"
#include "GlideRacerSportsWheelRear.h"
#include "ChaosWheeledVehicleMovementComponent.h"

AGlideRacerSportsCar::AGlideRacerSportsCar()
{
	// Note: for faster iteration times, the vehicle setup can be tweaked in the Blueprint instead

	// Set up the chassis
	GetChaosVehicleMovement()->ChassisHeight = 144.0f;
	GetChaosVehicleMovement()->DragCoefficient = 0.31f;

	// Set up the wheels
	GetChaosVehicleMovement()->bLegacyWheelFrictionPosition = true;
	GetChaosVehicleMovement()->WheelSetups.SetNum(4);


	GetChaosVehicleMovement()->WheelSetups[0].WheelClass = UGlideRacerSportsWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[0].BoneName = FName("Phys_Wheel_FL");
	GetChaosVehicleMovement()->WheelSetups[0].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[1].WheelClass = UGlideRacerSportsWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[1].BoneName = FName("Phys_Wheel_FR");
	GetChaosVehicleMovement()->WheelSetups[1].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[2].WheelClass = UGlideRacerSportsWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[2].BoneName = FName("Phys_Wheel_BL");
	GetChaosVehicleMovement()->WheelSetups[2].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[3].WheelClass = UGlideRacerSportsWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[3].BoneName = FName("Phys_Wheel_BR");
	GetChaosVehicleMovement()->WheelSetups[3].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);


	// Set up the engine
	// NOTE: Check the Blueprint asset for the Torque Curve
	GetChaosVehicleMovement()->EngineSetup.MaxTorque = 852.0f;
	GetChaosVehicleMovement()->EngineSetup.MaxRPM = 5400.0f;
	GetChaosVehicleMovement()->EngineSetup.EngineIdleRPM = 1200.0f;
	GetChaosVehicleMovement()->EngineSetup.EngineBrakeEffect = 0.05f;
	GetChaosVehicleMovement()->EngineSetup.EngineRevUpMOI = 5.0f;
	GetChaosVehicleMovement()->EngineSetup.EngineRevDownRate = 600.0f;

	// Set up the transmission
	GetChaosVehicleMovement()->TransmissionSetup.bUseAutomaticGears = true;
	GetChaosVehicleMovement()->TransmissionSetup.bUseAutoReverse = true;
	GetChaosVehicleMovement()->TransmissionSetup.FinalRatio = 3.08f;
	GetChaosVehicleMovement()->TransmissionSetup.ChangeUpRPM = 4500.0f;
	GetChaosVehicleMovement()->TransmissionSetup.ChangeDownRPM = 2000.0f;
	GetChaosVehicleMovement()->TransmissionSetup.GearChangeTime = 0.4f;
	GetChaosVehicleMovement()->TransmissionSetup.TransmissionEfficiency = 0.9f;

	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios.SetNum(8);
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[0] = 2.85f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[1] = 2.02f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[2] = 1.35f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[3] = 1.0f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[4] = 2.85f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[5] = 2.02f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[6] = 1.35f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[7] = 1.0f;


	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios.SetNum(1);
	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios[0] = 1.0f;

	// Set up the steering
	// NOTE: Check the Blueprint asset for the Steering Curve
	GetChaosVehicleMovement()->SteeringSetup.SteeringType = ESteeringType::AngleRatio;
	GetChaosVehicleMovement()->SteeringSetup.AngleRatio = 0.7f;
}