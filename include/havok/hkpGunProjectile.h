// hkpGunProjectile (Physics/Utilities/Weapons/hkpProjectileGun.h), 0x1C bytes: a projectile an hkpProjectileGun
// fires, which listens to its own body's contacts. The RTTI gives hkReferencedObject, then hkpContactListener at
// +0x8 (a protected base, as in Havok). The layout is the constructor's (82DF3E70: the flags at +0xC, the
// existence time at +0x14, the body at +0x10, which gets a reference, and the gun at +0x18) and the destructor's
// (82DF44D8, out of line: it takes the body out of the world and releases it). The deleting destructor 82DF4950
// keeps its fn_ name (its thunk 82DF4938 is a C unit).
// The primary vtable (??_7hkpGunProjectile@@6BhkReferencedObject@@@) has three slots of its own: +0xC 82DF4568 (the
// destructor's body: removes and releases the body), +0x10 82DF4940 (sets bit 1 of m_flags) and +0x14 (an empty,
// folded function). Their names (destroy, flagForDestruction, onUpdate) follow Havok's header and fit what the
// functions do. The listener vtable overrides contactPointCallback (82DF4920).
// isInWorld has the form of the destructor, its only user here: a bool that also tests m_body. removeFromWorld
// keeps its fn_ name (82DF3FA8, a C unit).
#ifndef HAVOK_HKPGUNPROJECTILE_H
#define HAVOK_HKPGUNPROJECTILE_H

#include "havok/hkBase.h"
#include "havok/hkpContactListener.h"
#include "havok/hkpRigidBody.h"

class hkpProjectileGun;
class hkpGunProjectile;
extern "C" void fn_82DF3FA8(hkpGunProjectile *self);   // hkpGunProjectile::removeFromWorld

class hkpGunProjectile : public hkReferencedObject, protected hkpContactListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpGunProjectile(hkpProjectileGun *gun, hkpRigidBody *body);
    virtual ~hkpGunProjectile();
    virtual void destroy();                    // +0xC
    virtual void flagForDestruction();         // +0x10
    virtual void onUpdate(hkReal timeStep);    // +0x14
    virtual void contactPointCallback(const hkpContactPointEvent &event);   // listener +0x0

    bool isInWorld() const { return m_body && m_body->getWorld(); }   // materialised as a bool (subfe; clrlwi 24)
    void removeFromWorld() { fn_82DF3FA8(this); }

protected:
    hkUint8 m_flags;            // +0xC
    hkpRigidBody *m_body;       // +0x10
    hkReal m_existanceTime;     // +0x14
    hkpProjectileGun *m_gun;    // +0x18
};

#endif
