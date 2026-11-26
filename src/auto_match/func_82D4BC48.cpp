// hkpMoppBvTreeShape::hkpMoppBvTreeShape(const hkpShapeCollection *, const hkpMoppCode *) (Physics/Collide/Shape/
// Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp): the hkMoppBvTreeShapeBase constructor (HK_SHAPE_MOPP, out of
// line), then the child container, which references the collection.
#include "havok/hkBase.h"
#include "havok/hkpMoppBvTreeShape.h"

hkpMoppBvTreeShape::hkpMoppBvTreeShape(const hkpShapeCollection *collection, const hkpMoppCode *code)
    : hkMoppBvTreeShapeBase(hkpShapeType(0xa), code), m_child(collection)
{
}
