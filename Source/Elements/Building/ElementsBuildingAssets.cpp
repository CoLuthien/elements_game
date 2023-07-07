
#include "Building/ElementsBuildingAssets.h"

#include <Algo/Find.h>

FElementsBuidlingAppearenceDetail
UElementsBuildingAppearence::GetAppearenceDetailAboutState(EBuildingAppearenceState State)
{
    for (auto const& Detail : Details)
    {
        if (Detail.State == State)
        {
            return Detail;
        }
    }

    return {}; // todo handle this better
}