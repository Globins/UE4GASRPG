// Fill out your copyright notice in the Description page of Project Settings.


#include "Items\RPGItemBase.h"
bool URPGItemBase::IsStackable() const
{
	if (MaxCount > 0)
	{
		return true;
	}
	return false;
}

FString URPGItemBase::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetId URPGItemBase::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(ItemType, GetFName());
}
