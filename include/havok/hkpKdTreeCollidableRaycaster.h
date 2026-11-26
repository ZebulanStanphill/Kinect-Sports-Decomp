// hkpKdTreeCollidableRaycaster (Physics/Internal/Collide/BroadPhase/KdTree?), 0x18 bytes: casts a world ray
// against the collidables a kd-tree cast reaches. RTTI: hkKdTreeCastCollector at +0; Havok's non-virtual class
// allocator (the deleting destructor 82DB2FB8 frees 0x18 bytes).
//
// ??_7hkpKdTreeCollidableRaycaster@@6B@ fills the interface's slots with 830961F0 (casts the ray, moved into the
// collidable's space, into the collector when there is one, else into the single output, and sets the output's
// root collidable on a hit), 83096178 (the output's root collidable is set) and 83096190 (the output's hit
// fraction). Those give the members; their names are guesses. The tree managers' castRay (82DB0A00, 82DB0C38,
// 82DB3288) build one on the stack: the constructor is inline and empty, and they fill the members after it; the
// two filters are the hkpRayCollidableFilter (+0x14) and hkpRayShapeCollectionFilter (+0x10) bases of one
// hkpCollisionFilter.
#ifndef HAVOK_HKPKDTREECOLLIDABLERAYCASTER_H
#define HAVOK_HKPKDTREECOLLIDABLERAYCASTER_H

#include "havok/hkKdTreeCastCollector.h"

class hkpRayCollidableFilter;
class hkpRayShapeCollectionFilter;
class hkpRayHitCollector;
struct hkpWorldRayCastInput;
struct hkpWorldRayCastOutput;

class hkpKdTreeCollidableRaycaster : public hkKdTreeCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpKdTreeCollidableRaycaster);
    HK_FORCE_INLINE hkpKdTreeCollidableRaycaster() {}
    virtual hkBool castCallback(hkUlong primitiveId);
    virtual hkBool hasHit() const;
    virtual hkReal getEarlyOutHitFraction() const;

    const hkpWorldRayCastInput *m_input;                         // +0x4
    const hkpRayCollidableFilter *m_filter;                      // +0x8
    const hkpRayShapeCollectionFilter *m_shapeCollectionFilter;  // +0xC
    hkpWorldRayCastOutput *m_output;                             // +0x10
    hkpRayHitCollector *m_collector;                             // +0x14
};

#endif
