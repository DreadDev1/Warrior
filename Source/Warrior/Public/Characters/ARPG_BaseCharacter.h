// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ARPG_BaseCharacter.generated.h"


class UARPG_AbilitySystemComponent;
class UARPG_AttributeSet;

UCLASS()
class WARRIOR_API ARPG_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ARPG_BaseCharacter();
	
	//~ Begin IAbilitySystemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End IAbilitySystemInterface Interface

protected:
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UARPG_AbilitySystemComponent* ARPGAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UARPG_AttributeSet* ARPGAttributeSet;

public:
	FORCEINLINE UARPG_AbilitySystemComponent* GetARPGAbilitySystemComponent() const {return ARPGAbilitySystemComponent;}

	FORCEINLINE UARPG_AttributeSet* GetARPGAttributeSet() const {return ARPGAttributeSet;}


};
