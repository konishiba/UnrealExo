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
}

void AExoSliderActor::Tranlate()
{
	if (GetActorLocation().X >= distance.X) return;
	const FVector& _location = FVector(1, 0, 0);
	SetActorLocation(GetActorLocation() + _location * MoveSpeed * GetWorld()->DeltaTimeSeconds);
}



