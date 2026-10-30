// hkpPairCollisionFilter's (and hkpConstraintCollisionFilter's) hkpShapeCollectionFilter override of the five-argument
// isCollisionEnabled (vtable slot 1 of the +0xC subobject; MSVC lays overloaded virtuals out in reverse declaration
// order, so slot 0 is the seven-argument one, 8 bytes longer because of its stack argument). With a child filter it
// forwards to the child's hkpShapeCollectionFilter interface (+0xC in the child), otherwise the collision is enabled.
// `self` is the hkpShapeCollectionFilter subobject; the child filter pointer is at self+0x30 (m_childFilter is at
// +0x3c of the filter). Reading it through the integer value of the pointer is what produces the original's code.
// The function keeps its fn_ name because the vtables refer to it.
#include "havok/hkpCollisionFilter.h"

extern "C" hkBool fn_82DC98E0(const hkpShapeCollectionFilter *self, const hkpCollisionInput &input,
                              const hkpCdBody &a, const hkpCdBody &b, const hkpShapeContainer &bContainer,
                              hkpShapeKey bKey)
{
    return *(const unsigned int *)((const char *)self + 0x30) == 0 ||
           ((const hkpShapeCollectionFilter *)(*(const unsigned int *)((const char *)self + 0x30) + 0xc))
               ->isCollisionEnabled(input, a, b, bContainer, bKey);
}
