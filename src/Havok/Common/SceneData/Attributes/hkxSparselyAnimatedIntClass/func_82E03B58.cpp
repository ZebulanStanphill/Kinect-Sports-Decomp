// finishLoadedObjecthkxSparselyAnimatedInt: the finish function in hkxSparselyAnimatedInt's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxSparselyAnimatedInt.h"

void HK_CALL finishLoadedObjecthkxSparselyAnimatedInt(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedInt(f);
}
