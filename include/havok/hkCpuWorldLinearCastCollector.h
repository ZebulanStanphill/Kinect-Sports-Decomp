// hkCpuWorldLinearCastCollector (Physics/Collide/World/... hkCpuWorldLinearCaster), 0xA0 bytes: the collector a
// world linear cast on the CPU passes to the broad phase (or the kd-tree, or one of the four AABB trees); for each
// candidate it runs the linear cast against the collidable (fn_83099BC0).
//
// Bases: the game's RTTI (??_R2hkCpuWorldLinearCastCollector@@8), in its order and at its offsets: the six
// collector interfaces at +0x0, +0x4, +0x8, +0xC, +0x10, +0x14. The six vtables (VFTABLE_for_...@@_821DD098 ..):
//  hkpBroadPhaseCastCollector: the deleting destructor (83099C88), addBroadPhaseHandle (fn_83099E18);
//  hkKdTreeCastCollector: a thunk (83099B80), castCallback (fn_83099DD0), hasHit (fn_83099BA0),
//    getEarlyOutHitFraction (fn_83099B68);
//  the four Collectors: a thunk (83099B78..83099B98) and processLeaf (fn_83099D90, fn_83099DA0, fn_83099DB0,
//    fn_83099DC0 for the bases in the order below).
// The overrides are C units; they keep their fn_ names (see the report's renames). The game has no out-of-line
// constructor, so none is declared; the vtable emitter (83099C88) uses the implicit one.
//
// Members: hasHit and getEarlyOutHitFraction read an object pointed to by +0x1C (its +0x14 is a hit count, its
// +0x4 the early-out fraction: an hkpCdPointCollector). Nothing else of +0x18..+0x9F is known.
#ifndef HAVOK_HKCPUWORLDLINEARCASTCOLLECTOR_H
#define HAVOK_HKCPUWORLDLINEARCASTCOLLECTOR_H

#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"
#include "havok/hkKdTreeCastCollector.h"
#include "havok/hkpBroadPhaseCastCollector.h"

class hkCpuWorldLinearCastCollector : public hkpBroadPhaseCastCollector,
                                      public hkKdTreeCastCollector,
                                      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
                                      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
                                      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
                                      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkCpuWorldLinearCastCollector);

    virtual hkReal addBroadPhaseHandle(const hkpBroadPhaseHandle *broadphaseHandle, int castIndex);   // fn_83099E18
    virtual hkBool castCallback(hkUlong primitiveId);                                              // fn_83099DD0
    virtual hkBool hasHit() const;                                                                 // fn_83099BA0
    virtual hkReal getEarlyOutHitFraction() const;                                                 // fn_83099B68
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Node *leaf);     // fn_83099D90
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Node *leaf);   // fn_83099DA0
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Node *leaf);     // fn_83099DB0
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Node *leaf);   // fn_83099DC0

    hkUint8 m_members[0x88];   // +0x18: unknown but the pointer at +0x1C (see above)
};

#endif
