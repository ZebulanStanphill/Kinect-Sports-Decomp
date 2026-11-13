// finishLoadedObjecthkpDefaultConvexListFilter: the finish function in hkpDefaultConvexListFilter's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpDefaultConvexListFilter -> hkpConvexListFilter -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConvexListFilter : public hkReferencedObject {
public:
    hkpConvexListFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpDefaultConvexListFilter : public hkpConvexListFilter {
public:
    hkpDefaultConvexListFilter(hkFinishLoadedObjectFlag flag) : hkpConvexListFilter(flag) {}
};

void HK_CALL finishLoadedObjecthkpDefaultConvexListFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDefaultConvexListFilter(f);
}
