// finishLoadedObjecthkpReorientAction: the finish function in hkpReorientAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpReorientAction.h"

void HK_CALL finishLoadedObjecthkpReorientAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpReorientAction(f);
}
