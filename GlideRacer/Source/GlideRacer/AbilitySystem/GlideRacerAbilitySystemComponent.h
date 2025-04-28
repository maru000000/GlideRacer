// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GlideRacerAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class GLIDERACER_API UGlideRacerAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	void AddCharacterAbilities(const TArray<TSubclassOf<class UGameplayAbility>>& StartupAbilities);

	void ActivateAbility(FGameplayTag AbilityTag);

	TArray<FGameplayAbilitySpecHandle> SpecHandles;
};
