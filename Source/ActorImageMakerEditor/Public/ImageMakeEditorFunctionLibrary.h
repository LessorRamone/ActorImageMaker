// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ImageMakeEditorFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ACTORIMAGEMAKEREDITOR_API UImageMakeEditorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(Blueprintcallable)
	void MakeStaticTextureFromRT(UTextureRenderTarget2D* RenderTarget, FString Name);
	
};
