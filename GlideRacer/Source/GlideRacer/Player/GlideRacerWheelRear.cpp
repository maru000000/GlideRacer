// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlideRacerWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGlideRacerWheelRear::UGlideRacerWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}