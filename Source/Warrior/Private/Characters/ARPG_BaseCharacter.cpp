// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ARPG_BaseCharacter.h"

#include "Game/AbilitySystem/ARPG_AbilitySystemComponent.h"
#include "Game/AbilitySystem/Attributes/ARPG_AttributeSet.h"

// Sets default values
ARPG_BaseCharacter::ARPG_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	ARPGAbilitySystemComponent = CreateDefaultSubobject<UARPG_AbilitySystemComponent>(TEXT("ARPGAbilitySystemComponent"));

	ARPGAttributeSet = CreateDefaultSubobject<UARPG_AttributeSet>(TEXT("ARPGAttributeSet"));
}

UAbilitySystemComponent* ARPG_BaseCharacter::GetAbilitySystemComponent() const
{
	return GetARPGAbilitySystemComponent();
}

void ARPG_BaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ARPGAbilitySystemComponent)
	{
		ARPGAbilitySystemComponent->InitAbilityActorInfo(this,this);
	}
}