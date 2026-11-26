// finishLoadedObjecthkxSparselyAnimatedBool: the finish function in hkxSparselyAnimatedBool's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedBool -> hkReferencedObject -> hkBaseObject.
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxSparselyAnimatedBool(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedBool(f);
}
