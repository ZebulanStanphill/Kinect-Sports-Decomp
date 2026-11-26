// cleanupLoadedObjecthkpBvShape: the cleanup function in hkpBvShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpBvShape.h"

void HK_CALL cleanupLoadedObjecthkpBvShape(void *p)
{
    static_cast<hkpBvShape *>(p)->~hkpBvShape();
}
