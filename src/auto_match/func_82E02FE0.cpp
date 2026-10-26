// cleanupLoadedObjecthkxMaterialShaderSet: the cleanup function in hkxMaterialShaderSet's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMaterialShaderSet {
public:
    virtual ~hkxMaterialShaderSet();
};

void HK_CALL cleanupLoadedObjecthkxMaterialShaderSet(void *p)
{
    static_cast<hkxMaterialShaderSet *>(p)->~hkxMaterialShaderSet();
}
