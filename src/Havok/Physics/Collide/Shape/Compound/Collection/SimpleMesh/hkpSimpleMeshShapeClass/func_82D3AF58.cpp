// cleanupLoadedObjecthkpSimpleMeshShape: the cleanup function in hkpSimpleMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpSimpleMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpSimpleMeshShape(void *p)
{
    static_cast<hkpSimpleMeshShape *>(p)->~hkpSimpleMeshShape();
}
