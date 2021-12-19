// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskManagerKinect.h"

// Sets default values
ATaskManagerKinect::ATaskManagerKinect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATaskManagerKinect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATaskManagerKinect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATaskManagerKinect::runKinectTask(int32 autreInput)
{
	(new FAutoDeleteAsyncTask<KinectManagerTask>(autreInput))->StartBackgroundTask();
}
/*void ATaskManagerKinect::runKinectTask(int32 dataDepthKinect[])
{
	(new FAutoDeleteAsyncTask<KinectManagerTask>(dataDepthKinect))->StartBackgroundTask();
}*/


//=============================

KinectManagerTask::KinectManagerTask(int32 _dataDepthKinect)
{
	donneesKinect = _dataDepthKinect;

}

KinectManagerTask::~KinectManagerTask()
{
	UE_LOG(LogTemp, Warning, TEXT("fin de la tache !!!"));
}

void KinectManagerTask::DoWork()
{

	UE_LOG(LogTemp, Warning, TEXT("input = ..."));

}