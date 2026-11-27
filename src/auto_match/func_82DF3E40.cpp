// hkpProjectileGun::stepGun(...) (Physics/Utilities/Weapons/hkpProjectileGun.cpp): slot +0x14 of
// ??_7hkpProjectileGun@@6B@. Counts the reload time down, then steps the projectiles (onUpdate).
#include "havok/hkpProjectileGun.h"

void hkpProjectileGun::stepGun(hkReal timeStep, hkpWorld *world, const hkpRigidBody *characterBody,
                               const hkTransform &viewTransform, bool fire, bool fireRmb)
{
    if (m_reload > 0.0f) {
        m_reload -= timeStep;
    }
    onUpdate(timeStep, world, characterBody, viewTransform, fire, fireRmb);
}
