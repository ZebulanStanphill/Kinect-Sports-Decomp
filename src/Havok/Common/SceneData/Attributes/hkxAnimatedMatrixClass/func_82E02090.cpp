// finishLoadedObjecthkxAnimatedMatrix: the finish function in hkxAnimatedMatrix's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxAnimatedMatrix -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxAnimatedMatrix.h"

void HK_CALL finishLoadedObjecthkxAnimatedMatrix(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxAnimatedMatrix(f);
}
