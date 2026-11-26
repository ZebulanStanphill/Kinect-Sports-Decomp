// cleanupLoadedObjecthkpMultiRayShape: the cleanup function in hkpMultiRayShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMultiRayShape.h"

void HK_CALL cleanupLoadedObjecthkpMultiRayShape(void *p)
{
    static_cast<hkpMultiRayShape *>(p)->~hkpMultiRayShape();
}
