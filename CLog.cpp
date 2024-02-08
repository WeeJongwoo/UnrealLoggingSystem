// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/CLog.h"
#include "CLog.h"

DEFINE_LOG_CATEGORY(File);
DEFINE_LOG_CATEGORY(Valid);

void CLog::Log(const UObject* InObject)
{
	if (IsValid(InObject))
	{
		UE_LOG(Valid, Error, TEXT("IsVaild ture"));
	}
	else
	{
		UE_LOG(Valid, Error, TEXT("IsVaild false"));
	}
}


void CLog::Log(const FString InClassName, int32 InLineNum, const FString InFliePath)
{
	FString LogString;
	LogString.Append(InClassName);
	LogString.Append(", ");
	LogString.Append(FString::FromInt(InLineNum));
	LogString.Append(InFliePath);

	UE_LOG(File, Log, TEXT("%s"), *LogString);

}


