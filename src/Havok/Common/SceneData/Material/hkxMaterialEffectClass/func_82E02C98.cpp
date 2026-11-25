// cleanupLoadedObjecthkxMaterialEffect: the cleanup function in hkxMaterialEffect's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxMaterialEffect(void *p)
{
    static_cast<hkxMaterialEffect *>(p)->~hkxMaterialEffect();
}
