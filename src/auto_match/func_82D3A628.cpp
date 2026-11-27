// finishLoadedObjecthkpListShape: the finish function in hkpListShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3E4C8) on the loaded object.
#include "havok/hkpListShape.h"

extern "C" void fn_82D3A628(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpListShape(f);
}
