// finishLoadedObjecthkxSparselyAnimatedEnum: the finish function in hkxSparselyAnimatedEnum's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedEnum -> hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxSparselyAnimatedEnum.h"

void HK_CALL finishLoadedObjecthkxSparselyAnimatedEnum(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedEnum(f);
}
