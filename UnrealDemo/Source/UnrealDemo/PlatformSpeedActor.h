// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformSpeedActor.generated.h"

UCLASS()
class UNREALDEMO_API APlatformSpeedActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Components")
	TObjectPtr<UStaticMeshComponent> actorMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Movement")
	FVector destination = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Movement")
	FRotator targetRotation = FRotator(0);

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Movement", meta = (UIMin = "1", UIMax = "400", ClampMin = "1", ClampMax = "400"))
	float moveSpeed = 200.0f;

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Movement", meta = (UIMin = "1", UIMax = "400", ClampMin = "1", ClampMax = "400"))
	float RotationSpeed = 50.0f;

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Debug")
	bool useDebug = true;

	UPROPERTY(EditAnywhere, Category = "PlatformSpeedActor|Debug")
	int segmentNumber = 10;
public:	
	// Sets default values for this actor's properties
	APlatformSpeedActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:	
	void Move();
	void Rotate();
	void DrawDebug();

};
