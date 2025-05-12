// Copyright Epic Games, Inc. All Rights Reserved.


#include "GlideRacerSportsWheelFront.h"

UGlideRacerSportsWheelFront::UGlideRacerSportsWheelFront()
{
	WheelRadius = 44.0f;
	WheelWidth = 24.0f;
	FrictionForceMultiplier = 2.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}