// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TaskManagerKinect.generated.h"

UCLASS()
class SAND_BOX_API ATaskManagerKinect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATaskManagerKinect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	//void runKinectTask(TArray<int32> donneesKinect);
	void runKinectTask(int32 autreInput);

private:
	//TArray<int32> _donneesKinect;
	
};

//====================

class KinectManagerTask : public FNonAbandonableTask
{
public:

	KinectManagerTask(int32 _dataDepthKinect); //initialisation

	~KinectManagerTask();	//destruction

	// required by UE4, is required 
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(KinectManagerTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	int32 donneesKinect;


	void DoWork(); //fonction automatiquement appellée

	//void DoWorkMain();

};