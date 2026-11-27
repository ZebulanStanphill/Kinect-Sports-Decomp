// hkCpuWorldRayCastCollector (Physics/Collide/World/... hkCpuWorldRayCast), 0x90 bytes: the collector a world ray
// cast on the CPU passes to the broad phase (or the kd-tree, or one of the four AABB trees); for each candidate it
// casts the ray against the collidable's shape and keeps the closest hit.
//
// Bases: the game's RTTI (??_R2hkCpuWorldRayCastCollector@@8), in its order and at its offsets: the six collector
// interfaces at +0x0, +0x4, +0x8, +0xC, +0x10, +0x14. The six vtables (??_7hkCpuWorldRayCastCollector@@6B...@):
//  hkpBroadPhaseCastCollector: the deleting destructor (830990F0), addBroadPhaseHandle (fn_83098898);
//  hkKdTreeCastCollector: a thunk (830983D0), castCallback (fn_830988E0), hasHit (fn_830983A0: m_hit),
//    getEarlyOutHitFraction (fn_830983B0: m_earlyOutHitFraction);
//  the four Collectors: a thunk (830983B8..830983D8) and processLeaf (fn_83098998, fn_83098918, fn_83098958,
//    fn_830989D8; each passes the leaf's collidable to fn_83098468, which casts against it).
// The overrides are C units; they keep their fn_ names (see the report's renames).
//
// Members: from the constructor (??0hkCpuWorldRayCastCollector@@QAA@XZ, 830982F0, out of line): 1.0 at +0x1C,
// false at +0x20, null at +0x70, and the hkpShapeRayCastInput at +0x40 (its constructor clears +0x60 and +0x64).
// +0x18 is the original input (the units' name); +0x21..+0x3F and +0x74..+0x8F are unknown.
#ifndef HAVOK_HKCPUWORLDRAYCASTCOLLECTOR_H
#define HAVOK_HKCPUWORLDRAYCASTCOLLECTOR_H

#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"
#include "havok/hkKdTreeCastCollector.h"
#include "havok/hkpBroadPhaseCastCollector.h"
#include "havok/hkpShapeRayCastInput.h"

struct hkpWorldRayCastInput;
struct hkpWorldRayCastOutput;

class hkCpuWorldRayCastCollector : public hkpBroadPhaseCastCollector,
                                   public hkKdTreeCastCollector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkCpuWorldRayCastCollector);
    hkCpuWorldRayCastCollector();

    virtual hkReal addBroadPhaseHandle(const hkpBroadPhaseHandle *broadphaseHandle, int castIndex);   // fn_83098898
    virtual hkBool castCallback(hkUlong primitiveId);                                              // fn_830988E0
    virtual hkBool hasHit() const;                                                                 // fn_830983A0
    virtual hkReal getEarlyOutHitFraction() const;                                                 // fn_830983B0
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Node *leaf);     // fn_83098918
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Node *leaf);   // fn_83098958
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Node *leaf);     // fn_83098998
    virtual hkReal processLeaf(const hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Node *leaf);   // fn_830989D8

    const hkpWorldRayCastInput *m_originalInput;   // +0x18
    hkReal m_earlyOutHitFraction;                  // +0x1C
    hkBool m_hit;                                  // +0x20
    hkUint8 m_pad21[0x1F];                         // +0x21: unknown
    hkpShapeRayCastInput m_shapeInput;             // +0x40
    hkpWorldRayCastOutput *m_result;               // +0x70
    hkUint8 m_pad74[0x1C];                         // +0x74: unknown
};

#endif
