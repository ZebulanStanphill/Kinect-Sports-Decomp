// cleanupLoadedObjecthkpSphereMotion: the cleanup function in hkpSphereMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMotion.h"

void HK_CALL cleanupLoadedObjecthkpSphereMotion(void *p)
{
    static_cast<hkpSphereMotion *>(p)->~hkpSphereMotion();
}
