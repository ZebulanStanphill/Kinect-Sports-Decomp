// hkpProjectileGun::hkpProjectileGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpProjectileGun.h):
// the hkpFirstPersonGun finish constructor, the class vtable, then an empty m_projectiles array (+nosave, so
// it is default-constructed). It keeps its fn_ name (a Matching unit, func_82DE4B30, calls it), so the
// constructor is called explicitly. hkpFirstPersonGun's finish constructor is out of line as fn_82DF0AD8
// (kept: a Matching unit calls it) and stores its own vtable, so the stand-in base below is novtable with
// opaque members.
#include "havok/hkBase.h"

class hkpFirstPersonGun;
extern "C" hkpFirstPersonGun *fn_82DF0AD8(hkpFirstPersonGun *self, hkFinishLoadedObjectFlag flag);

class __declspec(novtable) hkpFirstPersonGun {
public:
    HK_FORCE_INLINE hkpFirstPersonGun(hkFinishLoadedObjectFlag flag) { fn_82DF0AD8(this, flag); }
    virtual ~hkpFirstPersonGun();

    char m_data[0x20 - 0x4];   // hkReferencedObject part, m_type, m_name, m_keyboardKey, m_listeners
};

class hkpProjectile;
class hkpWorld;

class hkpProjectileGun : public hkpFirstPersonGun {
public:
    hkpProjectileGun(hkFinishLoadedObjectFlag flag) : hkpFirstPersonGun(flag) {}
    virtual ~hkpProjectileGun();

    int m_maxProjectiles;                       // +0x20
    hkReal m_reloadTime;                        // +0x24
    hkReal m_reload;                            // +0x28
    hkArray<hkpProjectile *> m_projectiles;     // +0x2c
    hkpWorld *m_world;                          // +0x38
    hkpWorld *m_destructionWorld;               // +0x3c
};

extern "C" hkpProjectileGun *fn_82DF4850(hkpProjectileGun *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpProjectileGun::hkpProjectileGun(flag);
    return self;
}
