// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/ARPGCharacterAniminstance.h"
#include "Characters/ARPGBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UARPGCharacterAniminstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<ARPGBaseCharacter>(TryGetPawnOwner());

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UARPGCharacterAniminstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D()>0.f;
}
