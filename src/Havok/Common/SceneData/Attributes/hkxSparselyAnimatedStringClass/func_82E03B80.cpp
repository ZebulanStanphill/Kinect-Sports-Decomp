// cleanupLoadedObjecthkxSparselyAnimatedString: the cleanup function in hkxSparselyAnimatedString's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedString(void *p)
{
    static_cast<hkxSparselyAnimatedString *>(p)->~hkxSparselyAnimatedString();
}
