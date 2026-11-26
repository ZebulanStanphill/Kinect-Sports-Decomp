#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"

#pragma intrinsic(__vxor)

hkpCachingShapePhantom::hkpCachingShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo)
    : hkpShapePhantom(shape, transform)
{
    m_orderDirty = false;
    m_collidable.setCollisionFilterInfo(collisionFilterInfo);
}
