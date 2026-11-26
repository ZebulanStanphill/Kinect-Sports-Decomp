// cleanupLoadedObjecthkpExtendedMeshShape: the cleanup function in hkpExtendedMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpExtendedMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpExtendedMeshShape(void *p)
{
    static_cast<hkpExtendedMeshShape *>(p)->~hkpExtendedMeshShape();
}
