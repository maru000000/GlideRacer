// Fill out your copyright notice in the Description page of Project Settings.

#include "Car/SUV/GlideRacerSUVWheelRear.h"

UGlideRacerSUVWheelRear::UGlideRacerSUVWheelRear()
{
	WheelRadius = 36.f;
	WheelWidth = 19.0f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 3.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;
	MaxSteerAngle = 50.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}
