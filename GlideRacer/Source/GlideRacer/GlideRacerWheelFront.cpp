// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlideRacerWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGlideRacerWheelFront::UGlideRacerWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}