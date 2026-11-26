// finishLoadedObjecthkpAabbPhantom: the finish function in hkpAabbPhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish
// constructor over a loaded object.
#include "havok/hkpAabbPhantom.h"

void HK_CALL finishLoadedObjecthkpAabbPhantom(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpAabbPhantom(f);
}
