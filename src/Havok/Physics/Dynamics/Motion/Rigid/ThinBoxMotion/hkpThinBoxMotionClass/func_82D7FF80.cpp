// finishLoadedObjecthkpThinBoxMotion: hkpThinBoxMotion's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

void HK_CALL finishLoadedObjecthkpThinBoxMotion(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpThinBoxMotion(f);
}
