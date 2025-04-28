// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GlideRacerAbilitySystemComponent.h"

void UGlideRacerAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<class UGameplayAbility>>& StartupAbilities)
{
	for (auto& AbilityClass : StartupAbilities) {
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);

		FGameplayAbilitySpecHandle SpecHandle = GiveAbility(AbilitySpec);

		auto& a = ActivatableAbilities; // breakPoint¿ë

		//GiveAbilityAndActivateOnce(AbilitySpec);
		//TryActivateAbility(SpecHandle);

		SpecHandles.Add(SpecHandle);
	}
}

void UGlideRacerAbilitySystemComponent::ActivateAbility(FGameplayTag AbilityTag)
{
	for (FGameplayAbilitySpecHandle SpecHandle : SpecHandles) {
		// TODO
		TryActivateAbility(SpecHandle);
	}
}
