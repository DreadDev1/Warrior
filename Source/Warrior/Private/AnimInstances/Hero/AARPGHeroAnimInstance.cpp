// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/Hero/AARPGHeroAnimInstance.h"

#include "Characters/Hero/ARPGHeroCharacter.h"

void UAARPGHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	if (OwningCharacter)
	{
		OwningHeroCharacter = Cast<AARPGHeroCharacter>(OwningCharacter);
	}
}

void UAARPGHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

if (bHasAcceleration)
	{
		IdleElpasedTime = 0.f;
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElpasedTime += DeltaSeconds;

		bShouldEnterRelaxState = (IdleElpasedTime >= EnterRelaxtStateThreshold);
	}
	
}
