// hkpGunProjectile::hkpGunProjectile(hkpProjectileGun *, hkpRigidBody *) (Physics/Utilities/Weapons/hkpProjectileGun.cpp).
#include "havok/hkBase.h"
class hkpEntity;
struct hkpContactPointEvent;
struct hkpCollisionEvent;
class hkpContactPointAddedEvent;
class hkpContactPointRemovedEvent;
class hkpContactProcessEvent;
class hkpContactPointConfirmedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// hkpContactListener (Physics/Dynamics/Collide/ContactListener/hkpContactListener.h): an interface with no base.
// Vtable (7 slots): three callbacks, the deleting destructor (slot 3, fn_8240DF10), three deprecated callbacks;
// the defaults are empty (fn_82BA02A8).
class hkpContactListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void contactPointCallback(const hkpContactPointEvent &event) {}
    virtual void collisionAddedCallback(const hkpCollisionEvent &event) {}
    virtual void collisionRemovedCallback(const hkpCollisionEvent &event) {}
    virtual ~hkpContactListener() {}
    virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event) {}
    virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent &event) {}
    virtual void contactProcessCallback(hkpContactProcessEvent &event) {}
};

// hkpCollisionListener (8 slots): overrides contactPointCallback (fn_82D95350) and adds
// contactPointConfirmedCallback.
class hkpCollisionListener : public hkpContactListener {
public:
    virtual void contactPointCallback(const hkpContactPointEvent &event);
    virtual ~hkpCollisionListener() {}
    virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent &event) {}
};

class hkpWorld;

// Only what the projectile code touches: hkpWorldObject::m_world (+0x8).
class hkpRigidBody : public hkReferencedObject {
public:
    hkpWorld *getWorld() const { return m_world; }
    hkpWorld *m_world;   // +0x8
};

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
