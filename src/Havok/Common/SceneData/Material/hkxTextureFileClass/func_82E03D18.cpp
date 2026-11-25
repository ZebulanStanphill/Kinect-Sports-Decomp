// cleanupLoadedObjecthkxTextureFile: the cleanup function in hkxTextureFile's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxTextureFile(void *p)
{
    static_cast<hkxTextureFile *>(p)->~hkxTextureFile();
}
