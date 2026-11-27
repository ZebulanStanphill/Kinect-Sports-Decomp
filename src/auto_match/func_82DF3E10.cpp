// hkpProjectileGun::fireGun(hkpWorld *, const hkTransform &) (Physics/Utilities/Weapons/hkpProjectileGun.cpp):
// slot +0x10 of ??_7hkpProjectileGun@@6B@. Fires (onGunFired) when the reload time has run out.
#include "havok/hkpProjectileGun.h"

void hkpProjectileGun::fireGun(hkpWorld *world, const hkTransform &viewTransform)
{
    if (m_reload > 0.0f) {
        return;
    }
    m_reload = m_reloadTime;
    onGunFired(world, viewTransform);
}
