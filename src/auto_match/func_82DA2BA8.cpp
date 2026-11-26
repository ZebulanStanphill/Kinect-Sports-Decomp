#include "havok/hkBase.h"
#include "havok/hkpSimpleShapePhantom.h"

#pragma intrinsic(__vxor)

hkpSimpleShapePhantom::hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo)
    : hkpShapePhantom(shape, transform)
{
    m_orderDirty = false;
    m_collidable.setCollisionFilterInfo(collisionFilterInfo);
}
