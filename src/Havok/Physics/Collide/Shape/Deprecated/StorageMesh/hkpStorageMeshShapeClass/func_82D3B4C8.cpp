// cleanupLoadedObjecthkpStorageMeshShape: the cleanup function in hkpStorageMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpStorageMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpStorageMeshShape(void *p)
{
    static_cast<hkpStorageMeshShape *>(p)->~hkpStorageMeshShape();
}
