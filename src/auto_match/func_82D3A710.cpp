// finishLoadedObjecthkpMoppBvTreeShape: the finish function in hkpMoppBvTreeShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3A7D8) on the loaded object.
#include "havok/hkpMoppBvTreeShape.h"

extern "C" void fn_82D3A710(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMoppBvTreeShape(f);
}
