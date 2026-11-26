// finishLoadedObjecthkpMouseSpringAction: the finish function in hkpMouseSpringAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpMouseSpringAction.h"

void HK_CALL finishLoadedObjecthkpMouseSpringAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMouseSpringAction(f);
}
