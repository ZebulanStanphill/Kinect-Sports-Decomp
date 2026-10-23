// hkpPairCollisionFilter's scalar deleting destructor ??_GhkpPairCollisionFilter@@UAAPAXI@Z
// (Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h): calls the out-of-line destructor
// (fn_82DC9AA8), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkpCollisionFilter.h"

// Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h.
class hkpPairCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    struct PairFilterKey {
        hkUint64 m_key;
    };
    struct PairFilterMap {
        void *m_elem;
        int m_numElems;
        int m_hashMod;
    };

    hkpPairCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpPairCollisionFilter();

    PairFilterMap m_disabledPairs;              // +0x30
    const hkpCollisionFilter *m_childFilter;    // +0x3C
};

void emitVtable_82DC9EB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPairCollisionFilter(f); }
