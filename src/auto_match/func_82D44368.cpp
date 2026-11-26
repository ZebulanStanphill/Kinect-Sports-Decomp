// hkpBvShape::hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape)
// (Physics/Collide/Shape/Compound/Tree/hkpBvShape.cpp): references both shapes (the child container's
// constructor first).
#include "havok/hkBase.h"
#include "havok/hkpBvShape.h"

hkpBvShape::hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape)
    : hkpShape(HK_SHAPE_BV), m_boundingVolumeShape(boundingVolumeShape), m_childShape(childShape)
{
    m_boundingVolumeShape->addReference();
}
