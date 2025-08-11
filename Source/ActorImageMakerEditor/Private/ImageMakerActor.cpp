// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageMakerActor.h"
#include "Components/SceneCaptureComponent2D.h"

// Sets default values
AImageMakerActor::AImageMakerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>("CaptureComp");
	CaptureComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	CaptureComponent->SetRelativeRotation(FRotator(-90, 0, 0));
	CaptureComponent->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;
}

// Called when the game starts or when spawned
void AImageMakerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImageMakerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AImageMakerActor::SetShowOnlyActors(const TArray<AActor*> ShowOnlyList)
{
	CaptureComponent->ShowOnlyActors = ShowOnlyList;
}

