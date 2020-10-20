// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "RPGItemBase.generated.h"

class URPGGameplayAbility;

/** Base class for all items, do not blueprint directly */
UCLASS(Abstract, BlueprintType)
class RPG_V1_API URPGItemBase : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	/** Type of this item, set in native parent class */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RPG|Item")
	FPrimaryAssetType ItemType;

	/** User-visible short name */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item")
	FText ItemName;

	/** User-visible long description */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item", meta = (Multiline = "true"))
	FText ItemDescription;

	/** Icon to display */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item")
	FSlateBrush ItemIcon;

	/** Icon to display */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item")
	UStaticMesh* ItemMesh;

	/** Price in game */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item")
	int32 Price;

	/** Maximum number of instances that can be in a stack at once, <= 0 means infinite */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item|Max")
	uint8 MaxCount;

	/** Returns if the item is consumable (MaxCount <= 0)*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RPG|Item|Max")
	bool IsStackable() const;

	/** Maximum level this item can be, <= 0 means infinite */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item|Max")
	int32 MaxLevel;

	/** Ability to grant if this item is equipped */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item|Abilities")
	TSubclassOf<URPGGameplayAbility> GrantedAbility;

	/** Ability level this item grants. <= 0 means the character level */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RPG|Item|Abilities")
	int32 AbilityLevel;

	/** Returns the logical name, equivalent to the primary asset id */
	UFUNCTION(BlueprintCallable, Category = "RPG|Item")
	FString GetIdentifierString() const;

	/** Overridden to use saved type */
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
