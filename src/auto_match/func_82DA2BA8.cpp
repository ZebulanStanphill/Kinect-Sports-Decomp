#include "havok/hkBase.h"
#include "havok/hkpSimpleShapePhantom.h"

#pragma intrinsic(__vxor)

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

hkpSimpleShapePhantom::hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo)
    : hkpShapePhantom(shape, transform)
{
    m_orderDirty = false;
    m_collidable.setCollisionFilterInfo(collisionFilterInfo);
}
