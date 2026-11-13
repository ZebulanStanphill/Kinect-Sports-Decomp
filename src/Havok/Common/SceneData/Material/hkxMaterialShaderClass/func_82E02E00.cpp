// cleanupLoadedObjecthkxMaterialShader: the cleanup function in hkxMaterialShader's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMaterialShader {
public:
    virtual ~hkxMaterialShader();
};

void HK_CALL cleanupLoadedObjecthkxMaterialShader(void *p)
{
    static_cast<hkxMaterialShader *>(p)->~hkxMaterialShader();
}
