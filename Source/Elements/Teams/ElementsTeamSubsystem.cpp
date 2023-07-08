
#include "Teams/ElementsTeamSubsystem.h"

void
UElementsTeamSharedInfoSubsystem::RegisterTeamInfo(AElementsTeamSharedInfo* Info)
{
    if (ensure(Info) == false)
    {
        return;
    }

    auto  Id    = Info->GetTeamId();
    auto& Entry = Infos.FindOrAdd(Id);
}

void
UElementsTeamSharedInfoSubsystem::UnregiserTeamInfo(int32 Id)
{
    if (Infos.Contains(Id))
    {
        Infos.Remove(Id);
    }
}

AElementsTeamSharedInfo*
UElementsTeamSharedInfoSubsystem::GetSharedTeamInfo(int32 Id) const
{
    return Infos.FindRef(Id);
}
