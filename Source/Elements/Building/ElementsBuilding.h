
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
    virtual int32 GetTeamId() const override;
    virtual void  SetTeamId(int32 InId) override;

protected: // Building Shape related propeties
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UElementsBuildingAppearence* Appearence;

protected:
    UPROPERTY(BlueprintReadOnly)
    int32 TeamId;
};