// hkpPairCollisionFilter (Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h),
// 0x40 bytes: disables collisions between listed pairs of entities.
#ifndef HAVOK_HKPPAIRCOLLISIONFILTER_H
#define HAVOK_HKPPAIRCOLLISIONFILTER_H

#include "havok/hkpCollisionFilter.h"

extern "C" {
void fn_82CEA8E8(void *self, hkMemoryAllocator *alloc);   // hkMapBase<PairFilterKey, hkUint64>::clearAndDeallocate (16-byte pairs)
void fn_82BA02A8(void *self);                             // the empty ~hkMapBase
void fn_82CEAB80(void *self, hkMemoryAllocator *alloc, int numElements);   // the same map's reserve
}

class hkpPairCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    struct PairFilterKey {
        hkUint64 m_key;
    };
    // hkMap<PairFilterKey, hkUint64, PairFilterPointerMapOperations>: its
    // constructor empties the map and reserves 0 elements from the heap
    // allocator (82DC9C90 stores 0, 0, -1 at +0x30 and calls fn_82CEAB80); its
    // destructor is clearAndDeallocate with the heap allocator, then the
    // empty ~hkMapBase.
    class PairFilterMap {
    public:
        HK_FORCE_INLINE PairFilterMap() : m_elem(HK_NULL), m_numElems(0), m_hashMod(-1)
        {
            fn_82CEAB80(this, &hkContainerHeapAllocator::get(this), 0);
        }
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
    // The game has no finish function for this class; this one only serves the vtable emitters.
    hkpPairCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpPairCollisionFilter();

    PairFilterMap m_disabledPairs;              // +0x30
    const hkpCollisionFilter *m_childFilter;    // +0x3C
};

#endif
