// Adjustor thunk in hkpConstraintCollisionFilter's hkpCollidableCollidableFilter vtable (subobject at +0x8): adjusts
// this and tail-calls the scalar deleting destructor with the same flags. The compiler emits it with the vtable as
// ??_EhkpConstraintCollisionFilter@@W...@AAPAXI@Z, branching to the weak alias ??_EhkpConstraintCollisionFilter@@UAAPAXI@Z,
// while symbols.txt names that address after the scalar deleting destructor (??_G..., func_82DC3688.cpp). A qualified
// call of MSVC's scalar deleting destructor member __delDtor references ??_G directly; it stays a tail call because
// ??_G, with the destructor inlined into it, is too big to inline (with the destructor only declared, /O2 inlines it).
// The class declarations are those of func_82DC3688.cpp; the destructor is defined inline here so that this unit
// does not define ??1hkpConstraintCollisionFilter@@UAA@XZ a second time.
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
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

inline hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}

extern "C" void *fn_82DC3670(char *self, unsigned int flags)
{
    return ((hkpConstraintCollisionFilter *)(self - 0x8))->hkpConstraintCollisionFilter::__delDtor(flags);
}
