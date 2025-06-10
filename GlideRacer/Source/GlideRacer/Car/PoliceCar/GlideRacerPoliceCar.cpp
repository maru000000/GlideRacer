// Fill out your copyright notice in the Description page of Project Settings.


#include "Car/PoliceCar/GlideRacerPoliceCar.h"
#include "GlideRacerPoliceCarWheelFront.h"
#include "GlideRacerPoliceCarWheelRear.h"
#include "ChaosWheeledVehicleMovementComponent.h"

AGlideRacerPoliceCar::AGlideRacerPoliceCar()
{
	// Note: for faster iteration times, the vehicle setup can be tweaked in the Blueprint instead

// Set up the chassis
	GetChaosVehicleMovement()->Mass = 1850.0f;
	GetChaosVehicleMovement()->ChassisWidth = 180.0f;
	GetChaosVehicleMovement()->ChassisHeight = 140.0f;
	GetChaosVehicleMovement()->DragCoefficient = 0.3f;

	// Set up the wheels
	GetChaosVehicleMovement()->bLegacyWheelFrictionPosition = true;
	GetChaosVehicleMovement()->WheelSetups.SetNum(4);

	GetChaosVehicleMovement()->WheelSetups[0].WheelClass = UGlideRacerPoliceCarWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[0].BoneName = FName("wheel_front_l");
	GetChaosVehicleMovement()->WheelSetups[0].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[1].WheelClass = UGlideRacerPoliceCarWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[1].BoneName = FName("wheel_front_r");
	GetChaosVehicleMovement()->WheelSetups[1].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[2].WheelClass = UGlideRacerPoliceCarWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[2].BoneName = FName("wheel_rear_l");
	GetChaosVehicleMovement()->WheelSetups[2].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[3].WheelClass = UGlideRacerPoliceCarWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[3].BoneName = FName("wheel_rear_r");
	GetChaosVehicleMovement()->WheelSetups[3].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	// Set up the engine
	// NOTE: Check the Blueprint asset for the Torque Curve
	GetChaosVehicleMovement()->EngineSetup.MaxTorque = 700.0f; // GAS
	GetChaosVehicleMovement()->EngineSetup.MaxRPM = 5400.0f;  // GAS
	GetChaosVehicleMovement()->EngineSetup.EngineIdleRPM = 1600.0f;
	GetChaosVehicleMovement()->EngineSetup.EngineBrakeEffect = 0.1f;
	GetChaosVehicleMovement()->EngineSetup.EngineRevUpMOI = 5.0f;
	GetChaosVehicleMovement()->EngineSetup.EngineRevDownRate = 600.0f;

	// Set up the transmission
	GetChaosVehicleMovement()->TransmissionSetup.bUseAutomaticGears = true;
	GetChaosVehicleMovement()->TransmissionSetup.bUseAutoReverse = true;
	GetChaosVehicleMovement()->TransmissionSetup.FinalRatio = 3.08f;
	GetChaosVehicleMovement()->TransmissionSetup.ChangeUpRPM = 4500.0f; // GAS
	GetChaosVehicleMovement()->TransmissionSetup.ChangeDownRPM = 2000.0f;
	GetChaosVehicleMovement()->TransmissionSetup.GearChangeTime = 0.2f;
	GetChaosVehicleMovement()->TransmissionSetup.TransmissionEfficiency = 1.0f;

	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios.SetNum(4);
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[0] = 2.82f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[1] = 1.5f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[2] = 1.0f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[3] = 0.7f;

	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios.SetNum(1);
	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios[0] = 2.32;

	// Set up the steering
	// NOTE: Check the Blueprint asset for the Steering Curve
	GetChaosVehicleMovement()->SteeringSetup.SteeringType = ESteeringType::Ackermann;
	GetChaosVehicleMovement()->SteeringSetup.AngleRatio = 0.8f;
}
