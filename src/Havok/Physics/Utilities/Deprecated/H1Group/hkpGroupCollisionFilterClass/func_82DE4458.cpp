// cleanupLoadedObjecthkpGroupCollisionFilter: the cleanup function in hkpGroupCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpGroupCollisionFilter.h"

void HK_CALL cleanupLoadedObjecthkpGroupCollisionFilter(void *p)
{
    static_cast<hkpGroupCollisionFilter *>(p)->~hkpGroupCollisionFilter();
}
