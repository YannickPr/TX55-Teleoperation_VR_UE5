// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Async/AsyncWork.h"
#include "Multithreaded.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MultithreadLibrary.generated.h"


class MultithreadedTask : public FNonAbandonableTask {
public:
	MultithreadedTask(UObject* object) { this->object = object; }
	UObject* object;
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(MultithreadedTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork()
	{
		IMultithreaded::Execute_MultithreadedFunction(object);
	}
};

/**
 *
 */
UCLASS()
class SAND_BOX_API UMultithreadedLibrary : public UBlueprintFunctionLibrary {
	//Here you can see my project was named "My project" when this class was created in the unreal editor. 
	//so now this class is callled "MYPROJECT_API" after the project name it was created within.
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		static void CallMultithreadedFunction(UObject* object) {
		(new FAutoDeleteAsyncTask<MultithreadedTask>(object))->StartBackgroundTask();
	}
};







/*
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Multithreaded.h"
#include "Async/Asyncwork.h"
#include "MultithreadLibrary.generated.h"



class MultithreadedTask : public FNonAbandonableTask {
public:
	MultithreadedTask(UObject object) { this->object = object; }

	UObject* object;
	
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(MultithreadedTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void Dowork() {
		IMultithread::Execute_MultithreadedFunction(object);
	}

};


UCLASS()
class SAND_BOX_API UMultithreadLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static void CallMultithreadedFunction(UObject* object) {
		(new FAutoDeleteAsyncTask<MultithreadedTask>(object))->StartBackgroundTask();
	}

};


*/