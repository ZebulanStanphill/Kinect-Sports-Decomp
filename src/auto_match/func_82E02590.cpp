// finishLoadedObjecthkxSparselyAnimatedEnum: the finish function in hkxSparselyAnimatedEnum's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedEnum -> hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedInt : public hkReferencedObject {
public:
    hkxSparselyAnimatedInt(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkxSparselyAnimatedEnum : public hkxSparselyAnimatedInt {
public:
    hkxSparselyAnimatedEnum(hkFinishLoadedObjectFlag flag) : hkxSparselyAnimatedInt(flag) {}
};

void HK_CALL finishLoadedObjecthkxSparselyAnimatedEnum(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedEnum(f);
}
