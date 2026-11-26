// cleanupLoadedObjecthkpCachingShapePhantom: the cleanup function in hkpCachingShapePhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpCachingShapePhantom.h"

void HK_CALL cleanupLoadedObjecthkpCachingShapePhantom(void *p)
{
    static_cast<hkpCachingShapePhantom *>(p)->~hkpCachingShapePhantom();
}
