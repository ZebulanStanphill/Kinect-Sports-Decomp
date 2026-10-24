// hkpConstraintCollisionFilter's deleting destructor adjustor thunk for its hkpRayShapeCollectionFilter subobject (+0x10):
// subtract the offset, then branch to the scalar deleting destructor
// ??_GhkpConstraintCollisionFilter@@UAAPAXI@Z (0x82DC3688, func_82DC3688.cpp). The compiler's own thunk
// (??_EhkpConstraintCollisionFilter@@WBA@AAPAXI@Z) branches to the vector deleting destructor ??_E..., a weak alias the
// linker resolved to ??_G, so it cannot name the original's target; a qualified call of MSVC's member name
// for the scalar deleting destructor, __delDtor, does (its body is too big to be inlined here). The
// adjustment is plain arithmetic: a static_cast, even to a reference, adds a null check. The thunk keeps its
// fn_ name (no rename map). Classes as in func_82DC3688.cpp.
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

// Listener interface with no base (RTTI). Vtable: the deleting destructor, then five callbacks whose default
// implementations are empty (folded into fn_82BA02A8).
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

extern "C" void *fn_82DC3680(hkpRayShapeCollectionFilter *self, unsigned int flags)
{
    hkpConstraintCollisionFilter *filter = (hkpConstraintCollisionFilter *)((char *)self - 0x10);
    return filter->hkpConstraintCollisionFilter::__delDtor(flags);
}
