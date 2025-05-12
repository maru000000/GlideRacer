// Fill out your copyright notice in the Description page of Project Settings.


#include "Car/BoxTruck/GlideRacerBoxTruckWheelRear.h"

UGlideRacerBoxTruckWheelRear::UGlideRacerBoxTruckWheelRear()
{
	WheelRadius = 44.f;
	WheelWidth = 41.0f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 2.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;

	MaxSteerAngle = 45.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}