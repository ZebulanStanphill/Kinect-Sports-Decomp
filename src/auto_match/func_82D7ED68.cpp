// finishLoadedObjecthkpEntity: the finish function in hkpEntity's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish
// constructor over a loaded object.
#include "havok/hkpEntity.h"

void HK_CALL finishLoadedObjecthkpEntity(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpEntity(f);
}
