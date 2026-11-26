// finishLoadedObjecthkxAnimatedVector: the finish function in hkxAnimatedVector's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxAnimatedVector -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxAnimatedVector.h"

void HK_CALL finishLoadedObjecthkxAnimatedVector(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxAnimatedVector(f);
}
