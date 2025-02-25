// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExoSliderActor.generated.h"

UCLASS()
class UNREALDEMO_API AExoSliderActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "ExoSliderActor|Components")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "ExoSliderActor|Values")
	float MoveSpeed = 100.0f;
	UPROPERTY(VisibleAnywhere, Category = "ExoSliderActor|Values")
	bool canMove = false;
	UPROPERTY(VisibleAnywhere, Category = "ExoSliderActor|Values")
	FVector distance = FVector(2000.0,0.0,0.0);
public:	
	// Sets default values for this actor's properties
	AExoSliderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Tranlate();

};
