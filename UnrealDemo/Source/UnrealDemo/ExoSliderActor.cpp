// Fill out your copyright notice in the Description page of Project Settings.


#include "ExoSliderActor.h"

// Sets default values
AExoSliderActor::AExoSliderActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AExoSliderActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExoSliderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Tranlate();
	Scale();
}

void AExoSliderActor::Tranlate()
{
	const FVector& _location = FVector(1, 0, 0);
	SetActorLocation(GetActorLocation() + _location * MoveSpeed * GetWorld()->DeltaTimeSeconds);
}

void AExoSliderActor::CheckSacle()
{
	FVector _scale = GetActorScale3D();
	if (_scale.X >= MaxScale.X)
	{
		SetDiscrase(true);
	}
	else if (_scale.X <= MinScale.X)
	{
		SetDiscrase(false);
	}
}

void AExoSliderActor::Scale()
{
	CheckSacle();
	if (!discrase) ScaleUp();
	else ScaleDown();
}

void AExoSliderActor::ScaleUp()
{
	SetActorScale3D(GetActorScale3D() + FVector(0.5) * GetWorld()->DeltaTimeSeconds);
}

void AExoSliderActor::ScaleDown()
{
	SetActorScale3D(GetActorScale3D() + FVector(-0.5) * GetWorld()->DeltaTimeSeconds);
}

