// hkpFixedRigidMotion::hkpFixedRigidMotion(const hkVector4 &, const hkQuaternion &) (Physics/Dynamics/Motion/Rigid/hkpFixedRigidMotion.cpp).
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

#pragma intrinsic(__vxor)

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

hkpFixedRigidMotion::hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpKeyframedRigidMotion(position, rotation)
{
    m_type = MOTION_FIXED;
}
