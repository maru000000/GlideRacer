// Fill out your copyright notice in the Description page of Project Settings.


#include "Car/Sedan/GlideRacerSedan.h"
#include "GlideRacerSedanWheelFront.h"
#include "GlideRacerSedanWheelRear.h"
#include "ChaosWheeledVehicleMovementComponent.h"

AGlideRacerSedan::AGlideRacerSedan()
{
	GetChaosVehicleMovement()->ChassisHeight = 144.0f;
	GetChaosVehicleMovement()->DragCoefficient = 0.31f;

	// Set up the wheels
	GetChaosVehicleMovement()->bLegacyWheelFrictionPosition = true;
	GetChaosVehicleMovement()->WheelSetups.SetNum(4);

	GetChaosVehicleMovement()->WheelSetups[0].WheelClass = UGlideRacerSedanWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[0].BoneName = FName("Wheel_Front_Left");
	GetChaosVehicleMovement()->WheelSetups[0].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[1].WheelClass = UGlideRacerSedanWheelFront::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[1].BoneName = FName("Wheel_Front_Right");
	GetChaosVehicleMovement()->WheelSetups[1].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[2].WheelClass = UGlideRacerSedanWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[2].BoneName = FName("Wheel_Rear_Left");
	GetChaosVehicleMovement()->WheelSetups[2].AdditionalOffset = FVector(0.0f, 0.0f, 0.0f);

	GetChaosVehicleMovement()->WheelSetups[3].WheelClass = UGlideRacerSedanWheelRear::StaticClass();
	GetChaosVehicleMovement()->WheelSetups[3].BoneName = FName("Wheel_Rear_Right");
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

	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios.SetNum(4);
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[0] = 2.82f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[1] = 1.5f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[2] = 1.0f;
	GetChaosVehicleMovement()->TransmissionSetup.ForwardGearRatios[3] = 0.7f;

	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios.SetNum(1);
	GetChaosVehicleMovement()->TransmissionSetup.ReverseGearRatios[0] = 1.0f;

	// Set up the steering
	// NOTE: Check the Blueprint asset for the Steering Curve
	GetChaosVehicleMovement()->SteeringSetup.SteeringType = ESteeringType::AngleRatio;
	GetChaosVehicleMovement()->SteeringSetup.AngleRatio = 0.7f;
}
