// cleanupLoadedObjecthkpProjectileGun: the cleanup function in hkpProjectileGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpProjectileGun {
public:
    virtual ~hkpProjectileGun();
};

void HK_CALL cleanupLoadedObjecthkpProjectileGun(void *p)
{
    static_cast<hkpProjectileGun *>(p)->~hkpProjectileGun();
}
