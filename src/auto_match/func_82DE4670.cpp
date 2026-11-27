// finishLoadedObjecthkpMountedBallGun: the finish function in hkpMountedBallGun's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpMountedBallGun.h"

void HK_CALL finishLoadedObjecthkpMountedBallGun(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMountedBallGun(f);
}
