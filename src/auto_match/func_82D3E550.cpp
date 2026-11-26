// hkpListShape::~hkpListShape (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp): releases every
// child shape, then the child info hkArray (+0x18) and the bases are destroyed. RTTI: hkpShapeCollection
// (hkpShapeContainer at +0x10).
#include "havok/hkpListShape.h"

hkpListShape::~hkpListShape()
{
    for (int i = 0; i < m_childInfo.getSize(); i++) {
        m_childInfo[i].m_shape->removeReference();
    }
}
