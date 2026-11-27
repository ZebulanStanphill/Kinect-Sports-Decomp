// hkpGravityGun::hkpGravityGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpGravityGun.h):
// hkpFirstPersonGun's finish constructor, the vtable, the +nosave m_grabbedBodies array default-constructed,
// and when finishing m_type = WEAPON_TYPE_GRAVITYGUN.
#include "havok/hkpGravityGun.h"

hkpGravityGun::hkpGravityGun(hkFinishLoadedObjectFlag flag) : hkpFirstPersonGun(flag), m_grabbedBodies()
{
    if (flag.m_finishing) {
        m_type = WEAPON_TYPE_GRAVITYGUN;
    }
}
