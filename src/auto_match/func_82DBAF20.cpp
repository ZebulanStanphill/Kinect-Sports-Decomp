// hkpThinBoxMotion::hkpThinBoxMotion(const hkVector4 &, const hkQuaternion &) (Physics/Dynamics/Motion/Rigid/ThinBoxMotion/hkpThinBoxMotion.h).
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

#pragma intrinsic(__vxor)

hkpThinBoxMotion::hkpThinBoxMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpBoxMotion(position, rotation)
{
    m_type = MOTION_THIN_BOX_INERTIA;
}
