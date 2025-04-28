// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GlideRacerPlayerState.h"

AGlideRacerPlayerState::AGlideRacerPlayerState(const FObjectInitializer& ObjectInitializer)
{
}

UAbilitySystemComponent* AGlideRacerPlayerState::GetAbilitySystemComponent() const
{
	return nullptr;
}

UGlideRacerAbilitySystemComponent* AGlideRacerPlayerState::GetGlideRacerAbilitySystemComponent() const
{
	return nullptr;
}

UGlideRacerAttributeSet* AGlideRacerPlayerState::GetGlideRacerPlayerSet() const
{
	return nullptr;
}
