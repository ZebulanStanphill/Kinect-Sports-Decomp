// finishLoadedObjecthkpWorld: the finish function in hkpWorld's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void HK_CALL finishLoadedObjecthkpWorld(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpWorld(f);
}
