// cleanupLoadedObjecthkpProjectileGun: the cleanup function in hkpProjectileGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpProjectileGun.h"

void HK_CALL cleanupLoadedObjecthkpProjectileGun(void *p)
{
    static_cast<hkpProjectileGun *>(p)->~hkpProjectileGun();
}
