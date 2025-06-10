// Fill out your copyright notice in the Description page of Project Settings.


#include "Car/PoliceCar/GlideRacerPoliceCarWheelFront.h"

UGlideRacerPoliceCarWheelFront::UGlideRacerPoliceCarWheelFront()
{
	WheelRadius = 35.24f;
	WheelWidth = 24.145f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 3.8f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;

	MaxSteerAngle = 45.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}
