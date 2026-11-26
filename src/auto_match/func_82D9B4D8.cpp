// hkpBoxMotion::hkpBoxMotion(const hkVector4 &, const hkQuaternion &) (Physics/Dynamics/Motion/Rigid/hkpBoxMotion.cpp). The inertia starts at the vector constant (1,1,1,1), lbl_8217D960.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

extern "C" const hkVector4 lbl_8217D960;   // (1, 1, 1, 1)

hkpBoxMotion::hkpBoxMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
{
    m_inertiaAndMassInv = lbl_8217D960;
    m_type = MOTION_BOX_INERTIA;
}
