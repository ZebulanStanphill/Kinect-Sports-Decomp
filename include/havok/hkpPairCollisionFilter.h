// hkpPairCollisionFilter (Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h),
// 0x40 bytes: disables collisions between listed pairs of entities.
#ifndef HAVOK_HKPPAIRCOLLISIONFILTER_H
#define HAVOK_HKPPAIRCOLLISIONFILTER_H

#include "havok/hkpCollisionFilter.h"

extern "C" {
void fn_82CEA8E8(void *self, hkMemoryAllocator *alloc);   // hkMapBase<PairFilterKey, hkUint64>::clearAndDeallocate (16-byte pairs)
void fn_82BA02A8(void *self);                             // the empty ~hkMapBase
}

class hkpPairCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    struct PairFilterKey {
        hkUint64 m_key;
    };
    // hkMap<PairFilterKey, hkUint64, PairFilterPointerMapOperations>: its
    // destructor is clearAndDeallocate with the heap allocator, then the
    // empty ~hkMapBase.
    class PairFilterMap {
    public:
        HK_FORCE_INLINE ~PairFilterMap()
        {
            fn_82CEA8E8(this, &hkContainerHeapAllocator::get(this));
            fn_82BA02A8(this);
        }

        void *m_elem;
        int m_numElems;
        int m_hashMod;
    };

    hkpPairCollisionFilter(const hkpCollisionFilter *childFilter = HK_NULL);   // out of line (fn_82DC9C90)
    hkpPairCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpPairCollisionFilter();

    PairFilterMap m_disabledPairs;              // +0x30
    const hkpCollisionFilter *m_childFilter;    // +0x3C
};

#endif
