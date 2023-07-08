
#include "Teams/ElementsTeamSharedInfo.h"

UElementsCombatResearchAsset*
AElementsTeamSharedInfo::GetCombatResearchCandicate(ERaceType Type) const
{
    for (auto* Cand : CombatResearchCandidate)
    {
        if (Cand->Race == Type)
        {
            return Cand;
        }
    }
    return nullptr;
}

void
AElementsTeamSharedInfo::AppendCombatResearchCandidate(UElementsCombatResearchAsset* Candidate)
{
    for (auto* Cand : CombatResearchCandidate)
    {
        if (Cand->Race == Candidate->Race)
        {
            return;
        }
    }
    CombatResearchCandidate.Add(Candidate);
}