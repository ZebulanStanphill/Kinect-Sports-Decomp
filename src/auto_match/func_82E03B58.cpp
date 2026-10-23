// finishLoadedObjecthkxSparselyAnimatedInt: the finish function in hkxSparselyAnimatedInt's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedInt : public hkReferencedObject {
public:
    hkxSparselyAnimatedInt(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxSparselyAnimatedInt(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedInt(f);
}
