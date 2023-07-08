
#pragma once

#include <UObject/Interface.h>
#include "IElementsActorInterface.generated.h"

UINTERFACE()
class ELEMENTS_API UElementsActorInterface : public UInterface
{
    GENERATED_BODY()
};

class IElementsActorInterface
{
    GENERATED_BODY()
public:
    virtual int32 GetTeamId() const     = 0;
    virtual void  SetTeamId(int32 InId) = 0;
};