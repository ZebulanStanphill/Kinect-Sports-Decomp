// finishLoadedObjecthkpDashpotAction: the finish function in hkpDashpotAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpDashpotAction.h"

void HK_CALL finishLoadedObjecthkpDashpotAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDashpotAction(f);
}
