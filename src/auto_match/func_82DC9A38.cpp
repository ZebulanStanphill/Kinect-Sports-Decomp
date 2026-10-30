// hkpPairCollisionFilter's (and hkpConstraintCollisionFilter's) ray-collidable override; m_childFilter is at +0x3c of the filter (+0x28 from this subobject).
// Forwarding implementation of hkpRayCollidableFilter::isCollisionEnabled (vtable slot shared by the classes whose
// filter keeps a child/other filter): with a child filter it forwards to the child's hkpRayCollidableFilter
// interface (+0x14 in the child), otherwise the collision is enabled. `self` is the hkpRayCollidableFilter
// subobject; the child filter pointer sits at self+0x28 (reading it through the integer value of the
// pointer is what produces the original's code). The function keeps its fn_ name because the
// vtables refer to it.
#include "havok/hkpCollisionFilter.h"

extern "C" hkBool fn_82DC9A38(const hkpRayCollidableFilter *self, const hkpWorldRayCastInput &a, const hkpCollidable &collidableB)
{
    return *(const unsigned int *)((const char *)self + 0x28) == 0 ||
           ((const hkpRayCollidableFilter *)(*(const unsigned int *)((const char *)self + 0x28) + 0x14))->isCollisionEnabled(a, collidableB);
}
