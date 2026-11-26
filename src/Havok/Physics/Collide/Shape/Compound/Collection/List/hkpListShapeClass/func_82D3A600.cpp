// cleanupLoadedObjecthkpListShape: the cleanup function in hkpListShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpListShape.h"

void HK_CALL cleanupLoadedObjecthkpListShape(void *p)
{
    static_cast<hkpListShape *>(p)->~hkpListShape();
}
