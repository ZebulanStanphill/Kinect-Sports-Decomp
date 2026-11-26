// finishLoadedObjecthkxVertexSelectionChannel: the finish function in hkxVertexSelectionChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxVertexSelectionChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxVertexSelectionChannel.h"

void HK_CALL finishLoadedObjecthkxVertexSelectionChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxVertexSelectionChannel(f);
}
