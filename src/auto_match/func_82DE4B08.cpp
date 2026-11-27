// finishLoadedObjecthkpProjectileGun: the finish function in hkpProjectileGun's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpProjectileGun.h"

void HK_CALL finishLoadedObjecthkpProjectileGun(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpProjectileGun(f);
}
