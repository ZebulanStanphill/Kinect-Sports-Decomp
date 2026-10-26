// cleanupLoadedObjecthkpSerializedDisplayRbTransforms: the cleanup function in hkpSerializedDisplayRbTransforms's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSerializedDisplayRbTransforms {
public:
    virtual ~hkpSerializedDisplayRbTransforms();
};

void HK_CALL cleanupLoadedObjecthkpSerializedDisplayRbTransforms(void *p)
{
    static_cast<hkpSerializedDisplayRbTransforms *>(p)->~hkpSerializedDisplayRbTransforms();
}
