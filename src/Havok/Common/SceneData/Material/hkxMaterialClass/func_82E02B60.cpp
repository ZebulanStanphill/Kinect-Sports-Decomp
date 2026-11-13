// cleanupLoadedObjecthkxMaterial: the cleanup function in hkxMaterial's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMaterial {
public:
    virtual ~hkxMaterial();
};

void HK_CALL cleanupLoadedObjecthkxMaterial(void *p)
{
    static_cast<hkxMaterial *>(p)->~hkxMaterial();
}
