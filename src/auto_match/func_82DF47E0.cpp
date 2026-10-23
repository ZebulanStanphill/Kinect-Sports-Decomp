// hkpProjectileGun::hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld)
// (Physics/Utilities/Weapons). The reload time is the literal 0.3f; the game's folded copy is
// lbl_82186E74, so this matches only with it named __real@3e99999a in the rename map (an extern
// constant's load is scheduled differently from a literal's).
#include "havok/hkBase.h"

class hkpWorld;
class hkdWorld;
class hkpGunProjectile;

class hkpFirstPersonGun : public hkReferencedObject {
public:
    hkpFirstPersonGun();   // fn_82DF0A60, ??0hkpFirstPersonGun@@QAA@XZ
    char m_firstPersonGun[0x18];   // +0x8: type, name, key, listeners
};

class hkpProjectileGun : public hkpFirstPersonGun {
public:
    hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld);
    virtual ~hkpProjectileGun();

    int m_maxProjectiles;                       // +0x20
    hkReal m_reloadTime;                        // +0x24
    hkReal m_reload;                            // +0x28
    hkArray<hkpGunProjectile *> m_projectiles;  // +0x2c
    hkpWorld *m_world;                          // +0x38
    hkdWorld *m_destructionWorld;               // +0x3c
};

hkpProjectileGun::hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld)
    : m_maxProjectiles(5), m_reloadTime(0.3f), m_reload(0.0f), m_world(world), m_destructionWorld(destructionWorld)
{
}
