// hkpListShape::hkpListShape(const hkpShape *const *, int, hkpShapeContainer::ReferencePolicy)
// (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp): known in the game only as fn_82D3E3F0.
// It reserves four children, sets the shapes through setShapes (fn_82D3E1F0; no collision filter infos), then
// enables every child. The header declares the constructor; it is defined here, HK_FORCE_INLINE.
#include "havok/hkpListShape.h"

extern "C" void fn_82D3E1F0(void *, const void *, int, int, int);   // hkpListShape::setShapes

HK_FORCE_INLINE hkpListShape::hkpListShape(const hkpShape *const *shapeArray, int numShapes,
                                           hkpShapeContainer::ReferencePolicy ref)
    : hkpShapeCollection(HK_SHAPE_LIST, COLLECTION_LIST)
{
    m_childInfo.reserve(4);
    fn_82D3E1F0(this, shapeArray, numShapes, 0, ref);
    for (int i = 0; i < 8; ++i)
        m_enabledChildren[i] = 0xffffffff;
    m_numDisabledChildren = 0;
    m_flags = 0;
}

extern "C" hkpListShape *fn_82D3E3F0(hkpListShape *self, const hkpShape *const *shapes, int count,
                                     hkpShapeContainer::ReferencePolicy policy)
{
    self->hkpListShape::hkpListShape(shapes, count, policy);
    return self;
}
