// hkpMountedBallGun::hkpMountedBallGun(): hkpBallGun's constructor, the vtable, m_type, m_name, then
// m_position from the vector constant lbl_82145840.
#include "havok/hkpMountedBallGun.h"
extern "C" const hkQuadReal lbl_82145840;
hkpMountedBallGun::hkpMountedBallGun()
{
    m_type = WEAPON_TYPE_MOUNTEDBALLGUN;
    m_name = "MountedBallGun";
    m_position.m_quad = lbl_82145840;
}
