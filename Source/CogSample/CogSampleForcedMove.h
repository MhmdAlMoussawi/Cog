#pragma once

#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "CogSampleForcedMove.generated.h"

class UGameplayEffect;

//--------------------------------------------------------------------------------------------------------------------------
USTRUCT(BlueprintType)
struct FCogSampleForcedMoveParams
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* Instigator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* Causer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UGameplayEffect> Effect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator Rotation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsAdditive = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Priority = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Duration = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Distance = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Height = 0.0f;
   
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinimumLandedTriggerTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bFinishOnLanded = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ERootMotionFinishVelocityMode FinishVelocityMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector FinishSetVelocity = FVector::ZeroVector;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FinishClampVelocity = 0.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCurveVector* PathOffsetCurve = nullptr;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCurveFloat* TimeMappingCurve = nullptr;

};

