// finishLoadedObjecthkxVertexIntDataChannel: the finish function in hkxVertexIntDataChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxVertexIntDataChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxVertexIntDataChannel.h"

void HK_CALL finishLoadedObjecthkxVertexIntDataChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxVertexIntDataChannel(f);
}
