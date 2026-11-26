// hkpDefaultConvexListFilter (Physics/Collide/Filter/DefaultConvexList/hkpDefaultConvexListFilter.h), 8 bytes: the
// convex list filter a world uses unless told otherwise. The game's hkClass (initialiser 8312D700) gives the parent
// (hkpConvexListFilter), the size and no members. Its vtable (??_7hkpDefaultConvexListFilter@@6B@) overrides
// getConvexListCollisionType (82D4A5F8); the destructor is implicit (slot 0 is a deleting destructor folded with
// hkpShape's). The finish constructor is inline (82D3A180, 82D3A198).
#ifndef HAVOK_HKPDEFAULTCONVEXLISTFILTER_H
#define HAVOK_HKPDEFAULTCONVEXLISTFILTER_H

#include "havok/hkBase.h"
#include "havok/hkpCollisionInput.h"

class hkpDefaultConvexListFilter : public hkpConvexListFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDefaultConvexListFilter() {}
    hkpDefaultConvexListFilter(hkFinishLoadedObjectFlag flag) : hkpConvexListFilter(flag) {}
    virtual ConvexListCollisionType getConvexListCollisionType(const hkpCdBody &convexListBody,
                                                               const hkpCdBody &otherBody,
                                                               const hkpCollisionInput &input) const;   // +0xC
};

#endif
