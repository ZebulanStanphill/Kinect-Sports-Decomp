// cleanupLoadedObjecthkpShapeInfo: the cleanup function in hkpShapeInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpShapeInfo.h"

void HK_CALL cleanupLoadedObjecthkpShapeInfo(void *p)
{
    static_cast<hkpShapeInfo *>(p)->~hkpShapeInfo();
}
