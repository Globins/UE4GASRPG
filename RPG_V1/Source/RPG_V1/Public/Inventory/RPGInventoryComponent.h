// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/RPGItemBase.h"
#include "Net/UnrealNetwork.h"
#include "Items/RPGItemPickUpBase.h"
#include "RPGInventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct RPG_V1_API FInventorySlot
{
	GENERATED_USTRUCT_BODY()
	FInventorySlot()
	{
		Quantity = 0;
		ItemData = nullptr;
	}
	UPROPERTY()
	URPGItemBase* ItemData;

	UPROPERTY()
	int32 Quantity;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG_V1_API URPGInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URPGInventoryComponent();

	/** Manually save the inventory, this is called from add/remove functions automatically */
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	void SaveInventory();

	/** Loads inventory from save game on game instance, this will replace arrays */
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	void LoadInventory();

	// Adds a new item to the inventory.
	// Returns true if the item is successfully added
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	bool AddItemToInventory(URPGItemBase* NewItem, int32 Quantity);

	// Removes a item from the inventory.
	// Returns true if the weapon exists and was removed. False if the item didn't exist in the inventory.
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	bool RemoveItemFromInventory(int indexToRemoveItem);

	// Returns returns the first instance of an item that does not have a partial stack
	// returns nullptr if cannot be found
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	int GetIndexOfFirstAvailablePartialStack(URPGItemBase* NewItem);

	// Returns true if the item swaps successfully
	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	bool SwapItemsInInventory(int SwappingIndex, int SwappedIndex);

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	TArray<FInventorySlot> GetItems();

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	void RemoveAllItemsFromInventory();

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	int32 GetCapacity();

	UPROPERTY(BlueprintAssignable, Category = "RPG|Inventory")
	FOnInventoryChanged OnInventoryUpdated;

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	int32 GetCapacityAtIndex(int index);

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	URPGItemBase* GetItemAtIndex(int index);


	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	void DropItemAtIndex(int ItemToDrop);
	//UFUNCTION(BlueprintCallable, Category = "GASShooter|Inventory")
	//void EquipWeapon(AGSWeapon* NewWeapon);
	//UFUNCTION(Server, Reliable)
	//void ServerEquipItem(AGSWeapon* NewWeapon);
	//void ServerEquipItem_Implementation(AGSWeapon* NewWeapon);
	//bool ServerEquipItem_Validate(AGSWeapon* NewWeapon);

	UPROPERTY(EditAnywhere)
	TSubclassOf<ARPGItemPickUpBase> ItemDropReference;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<FInventorySlot> Items;
	
	UPROPERTY()
	int32 Capacity;

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_DropItem(URPGItemBase* Item, int32 Quantity);
	void Server_DropItem_Implementation(URPGItemBase* Item, int32 Quantity);
	bool Server_DropItem_Validate(URPGItemBase* Item, int32 Quantity);

	UFUNCTION()
	virtual void OnRep_Items();
};
