// hkpGunProjectile::~hkpGunProjectile (Physics/Utilities/Weapons/hkpProjectileGun.cpp).
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

    bool isInWorld() const { return m_body && m_body->getWorld(); }   // materialised as a bool (subfe; clrlwi 24)
    void removeFromWorld() { fn_82DF3FA8(this); }

protected:
    hkUint8 m_flags;            // +0xC
    hkpRigidBody *m_body;       // +0x10
    hkReal m_existanceTime;     // +0x14
    hkpProjectileGun *m_gun;    // +0x18
};

hkpGunProjectile::~hkpGunProjectile()
{
    if (m_body) {
        if (isInWorld())
            removeFromWorld();
        m_body->removeReference();
        m_body = HK_NULL;
    }
}
