// cleanupLoadedObjecthkpGravityGun: the cleanup function in hkpGravityGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpGravityGun {
public:
    virtual ~hkpGravityGun();
};

void HK_CALL cleanupLoadedObjecthkpGravityGun(void *p)
{
    static_cast<hkpGravityGun *>(p)->~hkpGravityGun();
}
