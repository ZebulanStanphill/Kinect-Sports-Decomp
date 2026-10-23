// hkpGravityGun::hkpGravityGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpGravityGun.h):
// hkpFirstPersonGun's finish constructor (kept as fn_82DF0AD8, called by a Matching unit), the vtable,
// the +nosave m_grabbedBodies array default-constructed, and when finishing
// m_type = WEAPON_TYPE_GRAVITYGUN. It keeps its fn_ name too (a Matching unit calls it), so the
// constructor is called explicitly.
#include "havok/hkBase.h"

class hkpFirstPersonGun;
class hkpRigidBody;
extern "C" hkpFirstPersonGun *fn_82DF0AD8(hkpFirstPersonGun *self, hkFinishLoadedObjectFlag flag);

// Stand-in for hkpFirstPersonGun (: hkReferencedObject): its constructor is out of line (fn_82DF0AD8)
// and stores its own vtable, so this one must not store one.
class __declspec(novtable) hkpFirstPersonGun {
public:
    virtual ~hkpFirstPersonGun();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;
    virtual void initGun(void *world);
    virtual void stepGun(float timeStep, void *world, const void *characterBody, const void *viewTransform,
                         bool fire, bool fireRmb);
    virtual void reset(void *world);
    virtual void quitGun(void *world);
    virtual const char *getName() const;
    virtual int getType() const;

    HK_FORCE_INLINE hkpFirstPersonGun(hkFinishLoadedObjectFlag flag) { fn_82DF0AD8(this, flag); }

    hkUint16 m_memSizeAndFlags;     // +0x4
    hkInt16 m_referenceCount;       // +0x6
    hkUint8 m_type;                 // +0x8 hkEnum<Type, hkUint8>
    void *m_name;                   // +0xc hkStringPtr
    int m_keyboardKey;              // +0x10
    void *m_listeners[3];           // +0x14 hkArray<hkpFirstPersonGunBulletListener *>
};

class hkpGravityGun : public hkpFirstPersonGun {
public:
    enum { WEAPON_TYPE_GRAVITYGUN = 3 };
    hkpGravityGun(hkFinishLoadedObjectFlag flag) : hkpFirstPersonGun(flag), m_grabbedBodies()
    {
        if (flag.m_finishing) {
            m_type = WEAPON_TYPE_GRAVITYGUN;
        }
    }
    virtual ~hkpGravityGun();
    virtual void stepGun(float timeStep, void *world, const void *characterBody, const void *viewTransform,
                         bool fire, bool fireRmb);

    hkArray<hkpRigidBody *> m_grabbedBodies;   // +0x20 (+nosave)
};

extern "C" hkpGravityGun *fn_82DF1670(hkpGravityGun *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpGravityGun::hkpGravityGun(flag);
    return self;
}
