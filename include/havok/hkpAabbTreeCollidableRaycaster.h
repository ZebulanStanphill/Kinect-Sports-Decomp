// hkpAabbTreeCollidableRaycaster (Physics/Internal/Collide/BroadPhase/TreeBroadPhase?), 0x28 bytes: casts a world
// ray against the collidables an AABB tree query reports. RTTI: the four hkAabbTreeQueryUtils<...>::Collector
// interfaces at +0x0, +0x4, +0x8 and +0xC (<hkAabbTreeAabb, unsigned short>, <hkAabbTreeAabb16, unsigned short>,
// <hkAabbTreeAabb, unsigned int>, <hkAabbTreeAabb16, unsigned int>); Havok's non-virtual class allocator (the
// deleting destructor 83097030 frees 0x28 bytes; 83097018..83097028 are its adjustor thunks).
//
// The members are those of hkpKdTreeCollidableRaycaster (whose cast callback 830961F0 shows what they are), then
// the early-out hit fraction. The constructor (??0hkpAabbTreeCollidableRaycaster@@QAA@XZ, 83096D00) is out of
// line: it sets the fraction to 1 and clears the five pointers. The tree manager's castRay (82DB0A00, 82DB0C38)
// fills them; the two filters are the hkpRayCollidableFilter (+0x14) and hkpRayShapeCollectionFilter (+0x10) bases
// of one hkpCollisionFilter. The member names are guesses.
// The vtables fill the interfaces' slots with 83096F38, 83096F70, 83096FA8 and 83096FE0, one for each tree (the
// first for the interface at +0x0); they are declared here as the overrides they are.
#ifndef HAVOK_HKPAABBTREECOLLIDABLERAYCASTER_H
#define HAVOK_HKPAABBTREECOLLIDABLERAYCASTER_H

#include "havok/hkAabbTreeQueryUtils.h"

class hkpRayCollidableFilter;
class hkpRayShapeCollectionFilter;
class hkpRayHitCollector;
struct hkpWorldRayCastInput;
struct hkpWorldRayCastOutput;

class hkpAabbTreeCollidableRaycaster
    : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpAabbTreeCollidableRaycaster);
    hkpAabbTreeCollidableRaycaster();
    virtual hkReal processLeaf(const hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Node *leaf);
    virtual hkReal processLeaf(const hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Node *leaf);
    virtual hkReal processLeaf(const hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Node *leaf);
    virtual hkReal processLeaf(const hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Node *leaf);

    const hkpWorldRayCastInput *m_input;                         // +0x10
    const hkpRayCollidableFilter *m_filter;                      // +0x14
    const hkpRayShapeCollectionFilter *m_shapeCollectionFilter;  // +0x18
    hkpWorldRayCastOutput *m_output;                             // +0x1C
    hkpRayHitCollector *m_collector;                             // +0x20
    hkReal m_earlyOutHitFraction;                                // +0x24
};

#endif
