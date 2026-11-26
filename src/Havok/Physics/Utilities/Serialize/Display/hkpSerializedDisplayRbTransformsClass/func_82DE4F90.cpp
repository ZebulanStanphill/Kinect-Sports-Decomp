// cleanupLoadedObjecthkpSerializedDisplayRbTransforms: the cleanup function in hkpSerializedDisplayRbTransforms's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpSerializedDisplayRbTransforms.h"

void HK_CALL cleanupLoadedObjecthkpSerializedDisplayRbTransforms(void *p)
{
    static_cast<hkpSerializedDisplayRbTransforms *>(p)->~hkpSerializedDisplayRbTransforms();
}
