// finishLoadedObjecthkpDefaultConvexListFilter: the finish function in hkpDefaultConvexListFilter's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpDefaultConvexListFilter -> hkpConvexListFilter -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpCollisionInput.h"

// Physics/Collide/Filter/DefaultConvexList/hkpDefaultConvexListFilter.h (8 bytes). Its vtable
// (82135D48) overrides getConvexListCollisionType (82D4A5F8).
class hkpDefaultConvexListFilter : public hkpConvexListFilter {
public:
    hkpDefaultConvexListFilter(hkFinishLoadedObjectFlag flag) : hkpConvexListFilter(flag) {}
    virtual ConvexListCollisionType getConvexListCollisionType(const hkpCdBody &convexListBody,
                                                               const hkpCdBody &otherBody,
                                                               const hkpCollisionInput &input) const;
};

void HK_CALL finishLoadedObjecthkpDefaultConvexListFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDefaultConvexListFilter(f);
}
