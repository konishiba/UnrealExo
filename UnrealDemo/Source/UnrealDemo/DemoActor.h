// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DemoActor.generated.h"

UCLASS()
class UNREALDEMO_API ADemoActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category="DemoActor|Components")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "DemoActor|Values", meta = (UIMin = "1", UIMax = "20", ClampMin = "1", ClampMax = "20"))
	int health = 10;
	UPROPERTY(EditAnywhere, Category = "DemoActor|Values")
	bool isAlived = true;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	float toto = 2.5f;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	float MoveSpeed = 200.0f;

public:	
	// Sets default values for this actor's properties
	ADemoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void Move();
	void Tranlate();
};
