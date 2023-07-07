
#pragma once

#include "Interfaces/IElementsActorInterface.h"
#include "Building/ElementsBuildingAssets.h"

#include <GameFramework/Actor.h>

#include "ElementsBuilding.generated.h"

UCLASS(Abstract)
class AElementsBuilding : public AActor, public IElementsActorInterface
{
    GENERATED_BODY()

public: // Actor Interfaces
    virtual void BeginPlay() override;

public:
protected: // Building Shape related propeties
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UElementsBuildingAppearence* Appearence;

protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaximumHealth;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 CurrentHealth;
};