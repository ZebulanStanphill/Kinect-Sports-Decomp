// finishLoadedObjecthkpFirstPersonGun: the finish function in hkpFirstPersonGun's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpFirstPersonGun.h"

void HK_CALL finishLoadedObjecthkpFirstPersonGun(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpFirstPersonGun(f);
}
