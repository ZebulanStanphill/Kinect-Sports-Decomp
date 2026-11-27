// finishLoadedObjecthkpBallGun: the finish function in hkpBallGun's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpBallGun.h"

void HK_CALL finishLoadedObjecthkpBallGun(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBallGun(f);
}
