// cleanupLoadedObjecthkpWorld: the cleanup function in hkpWorld's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpWorld.h"

void HK_CALL cleanupLoadedObjecthkpWorld(void *p)
{
    static_cast<hkpWorld *>(p)->~hkpWorld();
}
