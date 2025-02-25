// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingActor.generated.h"

UCLASS()
class UNREALDEMO_API AMovingActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "MovingActor|Components")
	TObjectPtr<UStaticMeshComponent> actorMesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "MovingActor|Speed", meta = (UIMin = "1", UIMax = "200", ClampMin = "1", ClampMax = "200"))
	float MoveSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "MovingActor|Scale", meta = (ClampMin = "1", ClampMax = "100"))
	float scaleValue = 1;
	UPROPERTY(EditAnywhere, Category = "MovingActor|destination_Offset")
	float destinationOffset = 1000.0f;
	UPROPERTY(EditAnywhere, Category = "MovingActor|destination")
	FVector destination = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category = "MovingActor|Debug")
	bool useDebug = true;
public:	
	// Sets default values for this actor's properties
	AMovingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void Move();
	void ScaleDown();
	void DrawDebug();
};
