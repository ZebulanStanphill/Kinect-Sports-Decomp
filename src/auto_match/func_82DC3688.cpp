// hkpConstraintCollisionFilter's scalar deleting destructor (Physics/Collide/Filter/Constraint/
// hkpConstraintCollisionFilter.h): the empty user-written destructor is inlined (own vtables, then
// hkpConstraintListener's inline destructor at +0x40), the base destructor ~hkpPairCollisionFilter is called.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"

extern "C" void fn_82CEA8E8(void *self, hkMemoryAllocator *alloc);   // hkMapBase<PairFilterKey, hkUint64>::clearAndDeallocate (16-byte pairs)

// Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h.
class hkpPairCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    struct PairFilterKey {
        hkUint64 m_key;
    };
    // hkMap<PairFilterKey, hkUint64, PairFilterPointerMapOperations>: its destructor is clearAndDeallocate with the
    // heap allocator (fn_82CEA8E8), then the empty ~hkMapBase (fn_82BA02A8).
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

    hkpPairCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpPairCollisionFilter();

    PairFilterMap m_disabledPairs;              // +0x30
    const hkpCollisionFilter *m_childFilter;    // +0x3C
};

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}
