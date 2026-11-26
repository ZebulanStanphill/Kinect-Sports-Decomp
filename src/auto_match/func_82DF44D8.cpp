// hkpGunProjectile::~hkpGunProjectile (Physics/Utilities/Weapons/hkpProjectileGun.cpp).
#include "havok/hkBase.h"
#include "havok/hkpGunProjectile.h"

hkpGunProjectile::~hkpGunProjectile()
{
    if (m_body) {
        if (isInWorld())
            removeFromWorld();
        m_body->removeReference();
        m_body = HK_NULL;
    }
}
