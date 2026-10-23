// hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *) (hkpConstraintCollisionFilter.cpp).
#include "havok/hkpCollisionFilter.h"

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

    hkpPairCollisionFilter(const hkpCollisionFilter *childFilter = HK_NULL);   // out of line (fn_82DC9C90)
    hkpPairCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpPairCollisionFilter();

    PairFilterMap m_disabledPairs;              // +0x30
    const hkpCollisionFilter *m_childFilter;    // +0x3C
};

class hkpEntity;
class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Listener interfaces with no base (RTTI). Vtables: the deleting destructor, then five callbacks whose default
// implementations are empty (folded into fn_82BA02A8; hkpEntityListener's slot 3 is fn_82DB2F50).
class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter = HK_NULL);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter)
    : hkpPairCollisionFilter(childFilter)
{
    m_type = 6;   // HK_FILTER_CONSTRAINT
}
