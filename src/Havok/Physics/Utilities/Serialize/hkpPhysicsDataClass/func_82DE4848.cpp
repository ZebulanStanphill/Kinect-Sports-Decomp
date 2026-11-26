// cleanupLoadedObjecthkpPhysicsData: the cleanup function in hkpPhysicsData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPhysicsData.h"

void HK_CALL cleanupLoadedObjecthkpPhysicsData(void *p)
{
    static_cast<hkpPhysicsData *>(p)->~hkpPhysicsData();
}
