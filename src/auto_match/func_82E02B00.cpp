// cleanupLoadedObjecthkxLight: the cleanup function in hkxLight's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxLight {
public:
    virtual ~hkxLight();
};

void HK_CALL cleanupLoadedObjecthkxLight(void *p)
{
    static_cast<hkxLight *>(p)->~hkxLight();
}
