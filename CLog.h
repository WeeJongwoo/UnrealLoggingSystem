// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(File, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(Valid, Error, All);

/**
 * 
 */
class TESTPROJECT_API CLog
{
public:
	static void Log(const UObject* InObject);
	static void Log(const FString InFileName, int32 InLineNum, const FString InFliePath);
};
