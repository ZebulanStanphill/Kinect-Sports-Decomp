// hkpFirstPersonGun::hkpFirstPersonGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpFirstPersonGun.h):
// the vtable, m_name's finish constructor (fn_82CED308), an empty listener array, and when finishing
// m_type = WEAPON_TYPE_INVALID. It keeps its fn_ name (a Matching unit calls it), so the constructor
// is called explicitly.
#include "havok/hkBase.h"

class hkpFirstPersonGunBulletListener : public hkReferencedObject {
};
class hkpWorld;

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    enum Type { WEAPON_TYPE_INVALID = 0, WEAPON_TYPE_BALLGUN, WEAPON_TYPE_GRENADEGUN, WEAPON_TYPE_GRAVITYGUN,
                WEAPON_TYPE_MOUNTEDBALLGUN, WEAPON_TYPE_TWEAKERGUN, WEAPON_TYPE_MISSILEGUN };

    hkpFirstPersonGun(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_name(flag), m_listeners()
    {
        if (flag.m_finishing) {
            m_type = WEAPON_TYPE_INVALID;
        }
    }
    virtual ~hkpFirstPersonGun();
    virtual void initGun(hkpWorld *world) {}
    virtual void stepGun(float timeStep, hkpWorld *world, const void *characterBody, const void *viewTransform,
                         bool fire, bool fireRmb) = 0;
    virtual void reset(hkpWorld *world) {}
    virtual void quitGun(hkpWorld *world) {}
    virtual const char *getName() const;
    virtual int getType() const;

    hkUint8 m_type;                                          // +0x8 hkEnum<Type, hkUint8>
    hkStringPtr m_name;                                      // +0xc
    int m_keyboardKey;                                       // +0x10
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;  // +0x14
};

extern "C" hkpFirstPersonGun *fn_82DF0AD8(hkpFirstPersonGun *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpFirstPersonGun::hkpFirstPersonGun(flag);
    return self;
}
