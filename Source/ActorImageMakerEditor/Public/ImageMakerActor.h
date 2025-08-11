// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImageMakerActor.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable, BlueprintType)
class ACTORIMAGEMAKEREDITOR_API AImageMakerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImageMakerActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<USceneCaptureComponent2D> CaptureComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetShowOnlyActors(const TArray<AActor*> ShowOnlyList);

};
