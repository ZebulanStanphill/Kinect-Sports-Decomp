// cleanupLoadedObjecthkpCapsuleShape: the cleanup function in hkpCapsuleShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpCapsuleShape.h"

void HK_CALL cleanupLoadedObjecthkpCapsuleShape(void *p)
{
    static_cast<hkpCapsuleShape *>(p)->~hkpCapsuleShape();
}
