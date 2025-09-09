// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ARPGBaseCharacter.generated.h"


class UARPGAbilitySystemComponent;
class UARPGAttributeSet;

UCLASS()
class WARRIOR_API ARPGBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ARPGBaseCharacter();
	
	//~ Begin IAbilitySystemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End IAbilitySystemInterface Interface

protected:
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UARPGAbilitySystemComponent* ARPGAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UARPGAttributeSet* ARPGAttributeSet;

public:
	FORCEINLINE UARPGAbilitySystemComponent* GetARPGAbilitySystemComponent() const {return ARPGAbilitySystemComponent;}

	FORCEINLINE UARPGAttributeSet* GetARPGAttributeSet() const {return ARPGAttributeSet;}


};
