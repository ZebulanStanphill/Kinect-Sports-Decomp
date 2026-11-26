// getVtablehkpDefaultConvexListFilter, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDefaultConvexListFilter (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpDefaultConvexListFilter -> hkpConvexListFilter -> hkReferencedObject -> hkBaseObject.
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

const void *HK_CALL getVtablehkpDefaultConvexListFilter()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDefaultConvexListFilter)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDefaultConvexListFilter(f);
    return u.ptr;
}
