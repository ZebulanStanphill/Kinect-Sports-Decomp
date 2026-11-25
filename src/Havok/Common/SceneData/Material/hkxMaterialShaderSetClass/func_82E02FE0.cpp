// cleanupLoadedObjecthkxMaterialShaderSet: the cleanup function in hkxMaterialShaderSet's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxMaterialShaderSet(void *p)
{
    static_cast<hkxMaterialShaderSet *>(p)->~hkxMaterialShaderSet();
}
