// finishLoadedObjecthkpAngularDashpotAction: the finish function in hkpAngularDashpotAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpAngularDashpotAction.h"

void HK_CALL finishLoadedObjecthkpAngularDashpotAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpAngularDashpotAction(f);
}
