// cleanupLoadedObjecthkpMoppBvTreeShape: the cleanup function in hkpMoppBvTreeShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMoppBvTreeShape.h"

void HK_CALL cleanupLoadedObjecthkpMoppBvTreeShape(void *p)
{
    static_cast<hkpMoppBvTreeShape *>(p)->~hkpMoppBvTreeShape();
}
