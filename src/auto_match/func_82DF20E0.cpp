// hkpMountedBallGun::hkpMountedBallGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpMountedBallGun.h):
// hkpBallGun's finish constructor (kept as fn_82DEF270, called by a Matching unit), the vtable, and when
// finishing m_type = WEAPON_TYPE_MOUNTEDBALLGUN. It keeps its fn_ name too (a Matching unit calls it), so
// the constructor is called explicitly.
#include "havok/hkBase.h"

class hkpBallGun;
extern "C" hkpBallGun *fn_82DEF270(hkpBallGun *self, hkFinishLoadedObjectFlag flag);

// Stand-in for hkpBallGun (: hkpFirstPersonGun : hkReferencedObject): its constructor is out of line
// (fn_82DEF270) and stores its own vtable, so this one must not store one.
class __declspec(novtable) hkpBallGun {
public:
    virtual ~hkpBallGun();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;
    virtual void initGun(void *world);
    virtual void stepGun(float timeStep, void *world, const void *characterBody, const void *viewTransform,
                         bool fire, bool fireRmb);
    virtual void reset(void *world);
    virtual void quitGun(void *world);
    virtual const char *getName() const;
    virtual int getType() const;

    HK_FORCE_INLINE hkpBallGun(hkFinishLoadedObjectFlag flag) { fn_82DEF270(this, flag); }

    hkUint16 m_memSizeAndFlags;     // +0x4
    hkInt16 m_referenceCount;       // +0x6
    hkUint8 m_type;                 // +0x8 hkEnum<hkpFirstPersonGun::Type, hkUint8>
};

class hkpMountedBallGun : public hkpBallGun {
public:
    enum { WEAPON_TYPE_MOUNTEDBALLGUN = 4 };
    hkpMountedBallGun(hkFinishLoadedObjectFlag flag) : hkpBallGun(flag)
    {
        if (flag.m_finishing) {
            m_type = WEAPON_TYPE_MOUNTEDBALLGUN;
        }
    }
    virtual void stepGun(float timeStep, void *world, const void *characterBody, const void *viewTransform,
                         bool fire, bool fireRmb);
};

extern "C" hkpMountedBallGun *fn_82DF20E0(hkpMountedBallGun *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpMountedBallGun::hkpMountedBallGun(flag);
    return self;
}
