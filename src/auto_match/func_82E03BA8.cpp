// finishLoadedObjecthkxSparselyAnimatedString: the finish function in hkxSparselyAnimatedString's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxSparselyAnimatedString -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedString : public hkReferencedObject {
public:
    hkxSparselyAnimatedString(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxSparselyAnimatedString(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxSparselyAnimatedString(f);
}
