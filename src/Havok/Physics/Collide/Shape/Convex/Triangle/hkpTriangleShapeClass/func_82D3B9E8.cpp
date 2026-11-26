// cleanupLoadedObjecthkpTriangleShape: the cleanup function in hkpTriangleShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTriangleShape.h"

void HK_CALL cleanupLoadedObjecthkpTriangleShape(void *p)
{
    static_cast<hkpTriangleShape *>(p)->~hkpTriangleShape();
}
