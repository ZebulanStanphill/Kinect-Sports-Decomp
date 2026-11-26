// hkpProjectileGun (Physics/Utilities/Weapons/hkpProjectileGun.h, the folder of its class unit), 0x40 bytes:
// an hkpFirstPersonGun that keeps its projectiles in an array. The layout comes from the constructor
// (82DF47E0: 5, 0.3f and 0.0f at +0x20..+0x28, then its two arguments at +0x38 and +0x3C), the finish
// constructor (82DF4850: an empty array at +0x2C, +nosave) and the functions that walk the array
// (82DF43E8, 82DF45C8, 82DF4648). The member names follow Havok's header.
#ifndef HAVOK_HKPPROJECTILEGUN_H
#define HAVOK_HKPPROJECTILEGUN_H

#include "havok/hkpFirstPersonGun.h"

class hkdWorld;
class hkpGunProjectile;
class hkpProjectileGun;

extern "C" {
// Out of line, kept under its fn_ name (a C unit): removes every projectile that is still in the world
// (its vtable slot +0xC), releases them all and empties the array.
void fn_82DF45C8(hkpProjectileGun *self);
}

// ??_7hkpProjectileGun@@6B@ (11 slots): fireGun (82DF3E10) calls onGunFired when m_reload has run out and
// restarts it from m_reloadTime; stepGun (82DF3E40) counts m_reload down and calls onUpdate; reset (82DF4738)
// clears the projectiles. Two slots of its own follow: onGunFired (the empty function) and onUpdate
// (82DF46D0: steps the projectiles, clears a flag of each, drops the deleted ones). Their names follow
// Havok's header.
class hkpProjectileGun : public hkpFirstPersonGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld);
    // Out of line; in the game it is still fn_82DF4850.
    hkpProjectileGun(hkFinishLoadedObjectFlag flag);
    virtual ~hkpProjectileGun();
    virtual void fireGun(hkpWorld *world, const hkTransform &viewTransform);
    virtual void stepGun(hkReal timeStep, hkpWorld *world, const hkpRigidBody *characterBody,
                         const hkTransform &viewTransform, bool fire, bool fireRmb);
    virtual void reset(hkpWorld *world);
    virtual void onGunFired(hkpWorld *world, const hkTransform &viewTransform) {}      // +0x24
    virtual void onUpdate(hkReal timeStep, hkpWorld *world, const hkpRigidBody *characterBody,
                          const hkTransform &viewTransform, bool fire, bool fireRmb);   // +0x28

    void clearProjectiles() { fn_82DF45C8(this); }

    int m_maxProjectiles;                        // +0x20
    hkReal m_reloadTime;                         // +0x24
    hkReal m_reload;                             // +0x28
    hkArray<hkpGunProjectile *> m_projectiles;   // +0x2C (+nosave)
    hkpWorld *m_world;                           // +0x38
    hkdWorld *m_destructionWorld;                // +0x3C
};

#endif
