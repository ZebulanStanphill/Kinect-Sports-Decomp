// cleanupLoadedObjecthkpFirstPersonGun: the cleanup function in hkpFirstPersonGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpFirstPersonGun {
public:
    virtual ~hkpFirstPersonGun();
};

void HK_CALL cleanupLoadedObjecthkpFirstPersonGun(void *p)
{
    static_cast<hkpFirstPersonGun *>(p)->~hkpFirstPersonGun();
}
