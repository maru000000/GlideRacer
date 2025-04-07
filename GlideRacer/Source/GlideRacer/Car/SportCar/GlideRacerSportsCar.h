// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Car/GlideRacerVehiclePawn.h"
#include "GlideRacerSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class GLIDERACER_API AGlideRacerSportsCar : public AGlideRacerVehiclePawn
{
	GENERATED_BODY()
	
public:

	AGlideRacerSportsCar();
};
