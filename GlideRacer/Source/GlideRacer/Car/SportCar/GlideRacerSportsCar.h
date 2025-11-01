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

	void StartDrift();
	void StopDrift();
	void UpdateWheelFriction(bool bDrift);

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Drift")
	bool bIsDrifting = false;
};