// hkpNullCollisionFilter (Physics/Collide/Filter/Null/hkpNullCollisionFilter.h, the folder of its class unit),
// 0x30 bytes: a filter that enables every collision. It adds no members to hkpCollisionFilter: the
// constructor (82D897E0) runs hkpCollisionFilter's, stores the five vtables and sets m_type = HK_FILTER_NULL;
// the finish constructor (82D3AB48) sets it when finishing.
#ifndef HAVOK_HKPNULLCOLLISIONFILTER_H
#define HAVOK_HKPNULLCOLLISIONFILTER_H

#include "havok/hkpCollisionFilter.h"

// The vtables (??_7hkpNullCollisionFilter@@6B...@): every isCollisionEnabled is 82D3ABC8 (returns true);
// numShapeKeyHitsLimitBreached stays 82D41868. The primary slot 0 is the deleting destructor 82D3ABF8, the
// others reach it through adjustor thunks (82D3ABD8, 82D3ABE0, 82D3ABE8, 82D3ABF0).
class hkpNullCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullCollisionFilter();
    // Out of line (82D3AB48).
    hkpNullCollisionFilter(hkFinishLoadedObjectFlag flag);
    virtual ~hkpNullCollisionFilter();
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;
};

#endif
