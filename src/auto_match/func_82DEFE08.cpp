// hkpConstrainedSystemFilter's ray-shape-collection override; m_otherFilter is at +0x34 of the filter (+0x24 from this subobject).
// Forwarding implementation of hkpRayShapeCollectionFilter::isCollisionEnabled (vtable slot shared by the classes whose
// filter keeps a child/other filter): with a child filter it forwards to the child's hkpRayShapeCollectionFilter
// interface (+0x10 in the child), otherwise the collision is enabled. `self` is the hkpRayShapeCollectionFilter
// subobject; the child filter pointer sits at self+0x24 (reading it through the integer value of the
// pointer is what produces the original's code). The function keeps its fn_ name because the
// vtables refer to it.
#include "havok/hkpCollisionFilter.h"

extern "C" hkBool fn_82DEFE08(const hkpRayShapeCollectionFilter *self, const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer, hkpShapeKey bKey)
{
    return *(const unsigned int *)((const char *)self + 0x24) == 0 ||
           ((const hkpRayShapeCollectionFilter *)(*(const unsigned int *)((const char *)self + 0x24) + 0x10))->isCollisionEnabled(aInput, bContainer, bKey);
}
