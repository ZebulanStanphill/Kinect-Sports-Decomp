// finishLoadedObjecthkxVertexVectorDataChannel: the finish function in hkxVertexVectorDataChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxVertexVectorDataChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxVertexVectorDataChannel.h"

void HK_CALL finishLoadedObjecthkxVertexVectorDataChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxVertexVectorDataChannel(f);
}
