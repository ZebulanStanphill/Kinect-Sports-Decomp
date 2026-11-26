// cleanupLoadedObjecthkpNullCollisionFilter: the cleanup function in hkpNullCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpNullCollisionFilter.h"

void HK_CALL cleanupLoadedObjecthkpNullCollisionFilter(void *p)
{
    static_cast<hkpNullCollisionFilter *>(p)->~hkpNullCollisionFilter();
}
