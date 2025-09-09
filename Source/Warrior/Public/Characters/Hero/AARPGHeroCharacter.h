﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AARPGBaseCharacter.h"
#include "AARPGHeroCharacter.generated.h"

UCLASS()
class WARRIOR_API AAARPGHeroCharacter : public AAARPGBaseCharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
