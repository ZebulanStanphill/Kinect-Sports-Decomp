// cleanupLoadedObjecthkxMaterialEffect: the cleanup function in hkxMaterialEffect's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMaterialEffect {
public:
    virtual ~hkxMaterialEffect();
};

void HK_CALL cleanupLoadedObjecthkxMaterialEffect(void *p)
{
    static_cast<hkxMaterialEffect *>(p)->~hkxMaterialEffect();
}
