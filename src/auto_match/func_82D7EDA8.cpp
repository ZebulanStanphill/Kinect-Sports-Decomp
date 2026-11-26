// The cleanup function in the hkTypeInfo of hkpEntity::ExtendedListeners (HK_REFLECTION_DEFINE_*,
// Common/Base/Reflection/hkTypeInfo.h): destroys a loaded object in place.
#include "havok/hkpEntity.h"

extern "C" void fn_82D7EDA8(void *p)
{
    static_cast<hkpEntity::ExtendedListeners *>(p)->hkpEntity::ExtendedListeners::~ExtendedListeners();
}
