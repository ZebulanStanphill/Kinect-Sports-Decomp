// cleanupLoadedObjecthkxTextureInplace: the cleanup function in hkxTextureInplace's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxTextureInplace(void *p)
{
    static_cast<hkxTextureInplace *>(p)->~hkxTextureInplace();
}
