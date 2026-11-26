// hkpGunProjectile::hkpGunProjectile(hkpProjectileGun *, hkpRigidBody *) (Physics/Utilities/Weapons/hkpProjectileGun.cpp).
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpContactListener.h"

class hkpProjectileGun;
class hkpGunProjectile;
extern "C" void fn_82DF3FA8(hkpGunProjectile *self);   // hkpGunProjectile::removeFromWorld

// Physics/Utilities/Weapons/hkpProjectileGun.h. RTTI: hkReferencedObject, then hkpContactListener at +0x8.
class hkpGunProjectile : public hkReferencedObject, protected hkpContactListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpGunProjectile(hkpProjectileGun *gun, hkpRigidBody *body);
    virtual ~hkpGunProjectile();
    virtual void contactPointCallback(const hkpContactPointEvent &event);

    hkBool isInWorld() { return m_body->getWorld() != HK_NULL; }
    void removeFromWorld() { fn_82DF3FA8(this); }

protected:
    hkUint8 m_flags;            // +0xC
    hkpRigidBody *m_body;       // +0x10
    hkReal m_existanceTime;     // +0x14
    hkpProjectileGun *m_gun;    // +0x18
};

hkpGunProjectile::hkpGunProjectile(hkpProjectileGun*gun,hkpRigidBody*body){{hkUint8*p=&m_flags;*p=0;}m_existanceTime=0.0f;m_body=body;m_gun=gun;m_body->addReference();}
