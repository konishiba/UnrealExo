// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformHomeActor.generated.h"

UCLASS()
class UNREALDEMO_API APlatformHomeActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Components")
	TObjectPtr<UStaticMeshComponent> actorMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	FVector start = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	FVector destination = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	FRotator targetRotation = FRotator(0);	
	
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	FVector firstScale = FVector(0);
	
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	FVector secondScale = FVector(0);

	UPROPERTY(VisibleAnywhere, Category = "PlatformHomeActor|Movement")
	FVector scaleAfterInterp = FVector(0);

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement", meta = (UIMin = "1", UIMax = "400", ClampMin = "1", ClampMax = "400"))
	float moveSpeed = 200.0f;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement", meta = (UIMin = "1", UIMax = "400", ClampMin = "1", ClampMax = "400"))
	float RotationSpeed = 50.0f;
	
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement", meta = (UIMin = "1", UIMax = "400", ClampMin = "1", ClampMax = "400"))
	float scaleSpeed = 10.0f;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	bool inverseRotation = false;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Movement")
	bool isInDestination = false;

	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Debug")
	bool useDebug = true;
	
	UPROPERTY(EditAnywhere, Category = "PlatformHomeActor|Debug")
	int segmentNumber = 10;
	
public:	
	// Sets default values for this actor's properties
	APlatformHomeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:	
	void Move();
	void SwapPoint(FVector& _v1, FVector& _v2);
	void SwapRotation(FRotator& _v1, FRotator& _v2);
	void Rotate();
	void Scale();

	void DrawDebug();
};
