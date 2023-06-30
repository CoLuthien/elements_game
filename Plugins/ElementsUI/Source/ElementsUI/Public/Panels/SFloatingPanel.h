
#pragma once

#include <Blueprint/UserWidgetPool.h>
#include <Containers/Array.h>
#include <Containers/UnrealString.h>
#include <Containers/Set.h>
#include <HAL/Platform.h>
#include <Layout/Children.h>
#include <Layout/Geometry.h>
#include <Layout/Visibility.h>
#include <Math/Vector2D.h>
#include <Misc/Attribute.h>
#include <Misc/Optional.h>
#include <SlotBase.h>
#include <Templates/SharedPointer.h>
#include <Types/SlateEnums.h>
#include <UObject/GCObject.h>
#include <UObject/WeakObjectPtr.h>
#include <UObject/WeakObjectPtrTemplates.h>
#include <Widgets/DeclarativeSyntaxSupport.h>
#include <Widgets/SPanel.h>

class ELEMENTSUI_API SFloatingPanel : public SPanel
{
    class FFloatingSlot : public TBasicLayoutWidgetSlot<FFloatingSlot>
    {
    public:
        // clang-format off
        SLATE_SLOT_BEGIN_ARGS(FFloatingSlot, TBasicLayoutWidgetSlot<FFloatingSlot>)
            SLATE_ARGUMENT(FName, PanelName)
            SLATE_ARGUMENT(bool, bInitiallyEnabled) // todo
        SLATE_SLOT_END_ARGS()
        // clang-format on
        friend class SFloatingPanel;
    };

private:
    TPanelChildren<FFloatingSlot> Slots;
};