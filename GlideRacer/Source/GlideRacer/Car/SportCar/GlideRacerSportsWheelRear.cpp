// Copyright Epic Games, Inc. All Rights Reserved.


#include "GlideRacerSportsWheelRear.h"

UGlideRacerSportsWheelRear::UGlideRacerSportsWheelRear()
{
	WheelRadius = 44.f;
	WheelWidth = 41.0f;
	FrictionForceMultiplier = 2.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;
	MaxSteerAngle = 45.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}