// cleanupLoadedObjecthkpPlaneShape: the cleanup function in hkpPlaneShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPlaneShape.h"

void HK_CALL cleanupLoadedObjecthkpPlaneShape(void *p)
{
    static_cast<hkpPlaneShape *>(p)->~hkpPlaneShape();
}
