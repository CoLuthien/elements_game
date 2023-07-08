
#pragma once

#include "Teams/ElementsTeamInfoBase.h"
#include "Teams/ElementsTeamCombatAssets.h"

#include "ElementsTeamSharedInfo.generated.h"

UCLASS()
class AElementsTeamSharedInfo : public AElementsTeamInfoBase
{
    GENERATED_BODY()

public:
    UElementsCombatResearchAsset* GetCombatResearchCandicate(ERaceType Type) const;
    void AppendCombatResearchCandidate(UElementsCombatResearchAsset* Candidate);

private:
    UPROPERTY() // Maximum 5 level !!
    TArray<UElementsCombatResearchAsset*> CombatResearchCandidate;
};