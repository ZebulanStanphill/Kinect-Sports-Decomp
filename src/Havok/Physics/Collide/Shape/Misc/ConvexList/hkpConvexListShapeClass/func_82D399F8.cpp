// cleanupLoadedObjecthkpConvexListShape: the cleanup function in hkpConvexListShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConvexListShape.h"

void HK_CALL cleanupLoadedObjecthkpConvexListShape(void *p)
{
    static_cast<hkpConvexListShape *>(p)->~hkpConvexListShape();
}
