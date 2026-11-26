// finishLoadedObjecthkpMotorAction: the finish function in hkpMotorAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpMotorAction.h"

void HK_CALL finishLoadedObjecthkpMotorAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMotorAction(f);
}
