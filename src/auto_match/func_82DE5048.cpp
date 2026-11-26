// finishLoadedObjecthkpSpringAction: the finish function in hkpSpringAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpSpringAction.h"

void HK_CALL finishLoadedObjecthkpSpringAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSpringAction(f);
}
