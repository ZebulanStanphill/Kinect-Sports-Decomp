// cleanupLoadedObjecthkpMultiSphereShape: the cleanup function in hkpMultiSphereShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMultiSphereShape.h"

void HK_CALL cleanupLoadedObjecthkpMultiSphereShape(void *p)
{
    static_cast<hkpMultiSphereShape *>(p)->~hkpMultiSphereShape();
}
