// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory\RPGInventoryComponent.h"

// Sets default values for this component's properties
URPGInventoryComponent::URPGInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicated(true);
	Capacity = 30;
	FInventorySlot EmptySlot = FInventorySlot();
	for (int i = 0; i < Capacity; i++)
	{
		Items.Add(EmptySlot);
	}
	static ConstructorHelpers::FObjectFinder<UBlueprint> MyCharacterBlueprint(TEXT("/Game/RPG_V1_Content/Items/BP_Item")); //You can obtain this reference from editor
	if (MyCharacterBlueprint.Succeeded())
	{
		ItemDropReference = (UClass*)MyCharacterBlueprint.Object->GeneratedClass;
	}
}

void URPGInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(URPGInventoryComponent, Items);
}

void URPGInventoryComponent::SaveInventory()
{
	return;
}

void URPGInventoryComponent::LoadInventory()
{
	
}

bool URPGInventoryComponent::AddItemToInventory(URPGItemBase* NewItem, int32 Quantity)
{
	if (NewItem->IsStackable())
	{
		int partialStack = GetIndexOfFirstAvailablePartialStack(NewItem);
		if (partialStack != -1) //there is a partial stack, add to stack
		{
			int checkOverFlow = Items[partialStack].Quantity + Quantity;
			if (checkOverFlow > NewItem->MaxCount)
			{
				checkOverFlow -= NewItem->MaxCount;
				Items[partialStack].Quantity = NewItem->MaxCount;
				for (auto& Item : Items)
				{
					if (!Item.Quantity)
					{
						Item.ItemData = NewItem;
						Item.Quantity = checkOverFlow;
						return true;
					}
				}
				//TODO: If no available space, make new instance of item at feet
			}
			else
			{
				Items[partialStack].Quantity = checkOverFlow;
			}
			return true;
		}
		else //if there is no partial stack, add item
		{
			for (auto& Item : Items)
			{
				if (!Item.Quantity)
				{
					Item.ItemData = NewItem;
					Item.Quantity = Quantity;
					return true;
				}
			}
		}
	}
	else //else just add the item
	{
		for (auto& Item : Items)
		{
			if (!Item.Quantity)
			{
				Item.ItemData = NewItem;
				Item.Quantity = Quantity;
				return true;
			}
		}
	} //no space
	return false;
}

int URPGInventoryComponent::GetIndexOfFirstAvailablePartialStack(URPGItemBase* NewItem)
{
	for (int index = 0; index < Items.Num(); index++)
	{
		FInventorySlot item = Items[index];
		if (!item.Quantity)
		{
			continue;
		}
		if (item.ItemData->IsStackable() && item.ItemData == NewItem)
		{
			if (item.Quantity < item.ItemData->MaxCount)
			{
				return index;
			}
		}
	}
	return -1;
}

bool URPGInventoryComponent::RemoveItemFromInventory(int indexToRemoveItem)
{
	Items[indexToRemoveItem] = FInventorySlot();
	return true;
}
bool URPGInventoryComponent::SwapItemsInInventory(int SwappingIndex, int SwappedIndex)
{
	Items.Swap(SwappedIndex, SwappingIndex);
	return true;
}

TArray<FInventorySlot> URPGInventoryComponent::GetItems()
{
	return Items;
}

void URPGInventoryComponent::RemoveAllItemsFromInventory()
{
	Items.Empty();
	FInventorySlot EmptySlot = FInventorySlot();
	for (int i = 0; i < Capacity; i++)
	{
		Items.Add(EmptySlot);
	}
}

int32 URPGInventoryComponent::GetCapacity()
{
	return Capacity;
}
int32 URPGInventoryComponent::GetCapacityAtIndex(int index)
{
	return Items[index].Quantity;
}
URPGItemBase* URPGInventoryComponent::GetItemAtIndex(int index)
{
	return Items[index].ItemData;
}

// Called when the game starts
void URPGInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	LoadInventory();	
}

void URPGInventoryComponent::Server_DropItem_Implementation(URPGItemBase* Item, int32 Quantity)
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (Item)
		{
			FVector Location = GetOwner()->GetActorLocation();
			FRotator Rotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters SpawnInfo;
			auto spawnedItem = GetWorld()->SpawnActor<ARPGItemPickUpBase>(ItemDropReference, Location, Rotation, SpawnInfo);
			spawnedItem->SetItemData(Item, Quantity);
		}
	}
}
bool URPGInventoryComponent::Server_DropItem_Validate(URPGItemBase* Item, int32 Quantity)
{
	return true;
}


void URPGInventoryComponent::DropItemAtIndex(int ItemToDrop)
{
	Server_DropItem_Implementation(Items[ItemToDrop].ItemData, Items[ItemToDrop].Quantity);
	RemoveItemFromInventory(ItemToDrop);
}
void URPGInventoryComponent::OnRep_Items()
{
	Items = Items;
}
