// hkpBvShape::~hkpBvShape (Physics/Collide/Shape/Compound/Tree/hkpBvShape.cpp).
#include "havok/hkpBvShape.h"

hkpBvShape::~hkpBvShape()
{
    m_boundingVolumeShape->removeReference();
}
