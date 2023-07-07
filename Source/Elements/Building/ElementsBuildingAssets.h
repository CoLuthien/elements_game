
#pragma once

#include <Containers/Array.h>
#include <Engine/DataAsset.h>
#include <GameplayTagContainer.h>
#include <UObject/UObjectGlobals.h>

#include "ElementsBuildingAssets.generated.h"

class UStaticMesh;

UENUM(BlueprintType)
enum class EBuildingAppearenceState
{
    ConstructionStart = 0 UMETA(DisplayName = "Construction Start"),
};

USTRUCT(BlueprintType)
struct FElementsBuidlingAppearenceDetail
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Appearence")
    TSoftObjectPtr<UStaticMesh> Mesh;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Appearence")
    EBuildingAppearenceState State;
    // todo add effec9t
};

/**
assume that all Appearence asset will have same amount of asset and state
i.e for state)
build_start, build_intermediate, build_end, normal, damaged, critically_damaged,destroyed
*/
UCLASS(BlueprintType, Const)
class UElementsBuildingAppearence : public UDataAsset
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "Appearence")
    FElementsBuidlingAppearenceDetail GetAppearenceDetailAboutState(
        EBuildingAppearenceState StateTag);

public:
    // since this will never exceeds 20 entry, we will linearly search... may better than hashmap
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "Appearence"))
    TArray<FElementsBuidlingAppearenceDetail> Details;
};