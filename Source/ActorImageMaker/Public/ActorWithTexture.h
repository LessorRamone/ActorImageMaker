// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActorWithTexture.generated.h"


USTRUCT(BlueprintType)
struct FActorWithTextureEntry
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<AActor> ActorClass;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTexture> Texture;
};
/**
 * 
 */
UCLASS(BlueprintType)
class ACTORIMAGEMAKER_API UActorWithTexture : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorWithTextureEntry> ActorEntries;
};
