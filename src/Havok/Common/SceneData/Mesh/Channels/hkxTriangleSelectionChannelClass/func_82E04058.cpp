// finishLoadedObjecthkxTriangleSelectionChannel: the finish function in hkxTriangleSelectionChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxTriangleSelectionChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxTriangleSelectionChannel.h"

void HK_CALL finishLoadedObjecthkxTriangleSelectionChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxTriangleSelectionChannel(f);
}
