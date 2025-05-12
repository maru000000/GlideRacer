// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GlideRacerPlayerState.h"

AGlideRacerPlayerState::AGlideRacerPlayerState(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	AbilitySystemComponent = CreateDefaultSubobject<UGlideRacerAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true); // 네트워크 공유 허용 

	PlayerSet = CreateDefaultSubobject<UGlideRacerPlayerSet>("PlayerSet");
}

UAbilitySystemComponent* AGlideRacerPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UGlideRacerAbilitySystemComponent* AGlideRacerPlayerState::GetGlideRacerAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UGlideRacerAttributeSet* AGlideRacerPlayerState::GetGlideRacerPlayerSet() const
{
	return PlayerSet;
}
