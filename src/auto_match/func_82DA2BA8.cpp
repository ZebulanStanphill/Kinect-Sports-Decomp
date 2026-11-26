#include "havok/hkBase.h"
#include "havok/hkpSimpleShapePhantom.h"

#pragma intrinsic(__vxor)

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

hkpSimpleShapePhantom::hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo)
    : hkpShapePhantom(shape, transform)
{
    m_orderDirty = false;
    m_collidable.setCollisionFilterInfo(collisionFilterInfo);
}
