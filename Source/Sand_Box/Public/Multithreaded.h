// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Multithreaded.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMultithreaded : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class SAND_BOX_API IMultithreaded
{
	GENERATED_BODY()
		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Multithreaded")
		void MultithreadedFunction();

};



















/*
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Multithread.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMultithread : public UInterface
{
	GENERATED_BODY()
};

class SAND_BOX_API IMultithread
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Multithread")
	void MultithreadedFunction();
};


*/