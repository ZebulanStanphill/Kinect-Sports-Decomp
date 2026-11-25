// cleanupLoadedObjecthkxSkinBinding: the cleanup function in hkxSkinBinding's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxSkinBinding(void *p)
{
    static_cast<hkxSkinBinding *>(p)->~hkxSkinBinding();
}
