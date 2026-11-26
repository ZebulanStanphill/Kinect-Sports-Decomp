// cleanupLoadedObjecthkpTransformShape: the cleanup function in hkpTransformShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTransformShape.h"

void HK_CALL cleanupLoadedObjecthkpTransformShape(void *p)
{
    static_cast<hkpTransformShape *>(p)->~hkpTransformShape();
}
