// hkpGunProjectile::hkpGunProjectile(hkpProjectileGun *, hkpRigidBody *) (Physics/Utilities/Weapons/hkpProjectileGun.cpp).
#include "havok/hkBase.h"
#include "havok/hkpGunProjectile.h"

hkpGunProjectile::hkpGunProjectile(hkpProjectileGun*gun,hkpRigidBody*body){{hkUint8*p=&m_flags;*p=0;}m_existanceTime=0.0f;m_body=body;m_gun=gun;m_body->addReference();}
