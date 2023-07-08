
#pragma once

#include "ElementsTypes.h"
#include <Engine/DataAsset.h>

#include "ElementsTeamCombatAssets.generated.h"

USTRUCT(BlueprintType)
struct FElementsCombatLevels
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 MaximumAttackLevel;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 MaximumDefenseLevel;

    /*
    TODO Add an asset for image
    */
};

UCLASS(BlueprintType, Const)
class UElementsCombatResearchAsset : public UDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ERaceType Race;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FElementsCombatLevels BasicCombatResearch;
};
