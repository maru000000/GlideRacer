// Fill out your copyright notice in the Description page of Project Settings.

#include "Car/BoxTruck/GlideRacerBoxTruckWheelFront.h"

UGlideRacerBoxTruckWheelFront::UGlideRacerBoxTruckWheelFront()
{
	WheelRadius = 44.f;
	WheelWidth = 24.0f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 4.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;

	MaxSteerAngle = 35.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}