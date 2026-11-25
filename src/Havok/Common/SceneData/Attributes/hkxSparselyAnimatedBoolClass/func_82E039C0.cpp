// cleanupLoadedObjecthkxSparselyAnimatedBool: the cleanup function in hkxSparselyAnimatedBool's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedBool(void *p)
{
    static_cast<hkxSparselyAnimatedBool *>(p)->~hkxSparselyAnimatedBool();
}
