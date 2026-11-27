// hkpMountedBallGun::hkpMountedBallGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpMountedBallGun.h):
// hkpBallGun's finish constructor, the vtable, and when finishing m_type = WEAPON_TYPE_MOUNTEDBALLGUN.
#include "havok/hkpMountedBallGun.h"

hkpMountedBallGun::hkpMountedBallGun(hkFinishLoadedObjectFlag flag) : hkpBallGun(flag)
{
    if (flag.m_finishing) {
        m_type = WEAPON_TYPE_MOUNTEDBALLGUN;
    }
}
