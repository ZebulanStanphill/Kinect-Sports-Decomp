// cleanupLoadedObjecthkpStorageExtendedMeshShape: the cleanup function in hkpStorageExtendedMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpStorageExtendedMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShape(void *p)
{
    static_cast<hkpStorageExtendedMeshShape *>(p)->~hkpStorageExtendedMeshShape();
}
