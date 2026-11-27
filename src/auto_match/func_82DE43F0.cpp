// finishLoadedObjecthkpGravityGun: the finish function in hkpGravityGun's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpGravityGun.h"

void HK_CALL finishLoadedObjecthkpGravityGun(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpGravityGun(f);
}
