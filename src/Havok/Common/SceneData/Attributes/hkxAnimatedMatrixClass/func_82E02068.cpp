// cleanupLoadedObjecthkxAnimatedMatrix: the cleanup function in hkxAnimatedMatrix's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkxAnimatedMatrix.h"

void HK_CALL cleanupLoadedObjecthkxAnimatedMatrix(void *p)
{
    static_cast<hkxAnimatedMatrix *>(p)->~hkxAnimatedMatrix();
}
