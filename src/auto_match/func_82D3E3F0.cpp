// hkpListShape::hkpListShape(const hkpShape *const *, int, hkpShapeContainer::ReferencePolicy)
// (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp). It reserves four children, sets the shapes
// through setShapes (fn_82D3E1F0, which keeps its fn_ name; no collision filter infos), then enables every child.
#include "havok/hkpListShape.h"

extern "C" void fn_82D3E1F0(void *, const void *, int, int, int);   // hkpListShape::setShapes

hkpListShape::hkpListShape(const hkpShape *const *shapeArray, int numShapes,
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
