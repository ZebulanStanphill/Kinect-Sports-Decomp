// finishLoadedObjecthkOstream: the finish function in hkOstream's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"

void HK_CALL finishLoadedObjecthkOstream(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkOstream(f);
}
