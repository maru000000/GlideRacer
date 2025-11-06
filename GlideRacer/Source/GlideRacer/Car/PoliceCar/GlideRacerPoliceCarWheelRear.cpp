// Fill out your copyright notice in the Description page of Project Settings.

#include "Car/PoliceCar/GlideRacerPoliceCarWheelRear.h"

UGlideRacerPoliceCarWheelRear::UGlideRacerPoliceCarWheelRear()
{
	WheelRadius = 35.24f;
	WheelWidth = 24.145f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 3.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;

	MaxSteerAngle = 40.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 4000.0f;
}
