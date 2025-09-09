// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ARPGBaseCharacter.h"

#include "Game/AbilitySystem/ARPGAbilitySystemComponent.h"
#include "Game/AbilitySystem/Attributes/ARPGAttributeSet.h"

// Sets default values
ARPGBaseCharacter::ARPGBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	ARPGAbilitySystemComponent = CreateDefaultSubobject<UARPGAbilitySystemComponent>(TEXT("ARPGAbilitySystemComponent"));

	ARPGAttributeSet = CreateDefaultSubobject<UARPGAttributeSet>(TEXT("ARPGAttributeSet"));
}

UAbilitySystemComponent* ARPGBaseCharacter::GetAbilitySystemComponent() const
{
	return GetARPGAbilitySystemComponent();
}

void ARPGBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ARPGAbilitySystemComponent)
	{
		ARPGAbilitySystemComponent->InitAbilityActorInfo(this,this);
	}
}