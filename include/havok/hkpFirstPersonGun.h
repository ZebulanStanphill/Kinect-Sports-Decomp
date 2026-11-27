// hkpFirstPersonGun and hkpFirstPersonGunBulletListener (Physics/Utilities/Weapons/hkpFirstPersonGun.h,
// the folder of the class units). hkpFirstPersonGun is 0x20 bytes: an hkReferencedObject with a type, a
// name, a key and the bullet listeners. The layout comes from the default constructor (82DF0A60: m_type
// (stb +0x8), m_name (+0xC), m_keyboardKey (stb 0x71 at +0x10)), the finish constructor (82DF0AD8: m_name's
// finish constructor, an empty array at +0x14) and the destructor (82DF0B48: releases every listener of
// the array at +0x14, then destroys it and m_name).
#ifndef HAVOK_HKPFIRSTPERSONGUN_H
#define HAVOK_HKPFIRSTPERSONGUN_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkStringPtr.h"
#include "havok/hkTransform.h"
#include "havok/hkVector4.h"

class hkpFirstPersonGun;
class hkpRigidBody;
class hkpWorld;

// hkpFirstPersonGunBulletListener: what a gun tells about its bullets. The game has no vtable or RTTI for
// it (no subclass is built), so the callbacks are plain declarations. Their slots are those the guns
// call: bulletCreatedCallback +0xC and bulletDeletedCallback +0x10 (hkpBallGun::fireGun, 82DEF548),
// gunFiredCallback +0x14 (82DEF548, hkpGravityGun::stepGun 82DF13F0). The guns release their listeners
// with removeReference, so it is an hkReferencedObject. The names follow Havok's header.
class hkpFirstPersonGunBulletListener : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    virtual void bulletCreatedCallback(hkpRigidBody *bullet);                    // +0xC
    virtual void bulletDeletedCallback(hkpRigidBody *bullet);                    // +0x10
    virtual void gunFiredCallback(const hkVector4 &from, const hkVector4 &to);   // +0x14
};

// ??_7hkpFirstPersonGun@@6B@ has nine slots: hkReferencedObject's three, then initGun, fireGun and stepGun
// (the empty function), quitGun (82DF0768, which calls slot +0x20 with its arguments), getName (82DF0758,
// returns m_name) and reset (empty). What is checked against the game: fireGun takes the world and the view
// transform (hkpBallGun's, 82DEF548), stepGun starts with the time step (hkpProjectileGun's, 82DF3E40),
// reset drops the gun's bodies (hkpBallGun 82DEF1A0, hkpGravityGun 82DF1220, hkpProjectileGun 82DF4738).
// The names and the other parameters follow Havok's header.
class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    // The type the subclasses' constructors store (hkpBallGun 1, hkpGravityGun 3, hkpMountedBallGun 4); the
    // names follow Havok's header.
    enum Type {
        WEAPON_TYPE_INVALID = 0,
        WEAPON_TYPE_BALLGUN,
        WEAPON_TYPE_GRENADEGUN,
        WEAPON_TYPE_GRAVITYGUN,
        WEAPON_TYPE_MOUNTEDBALLGUN,
        WEAPON_TYPE_TWEAKERGUN,
        WEAPON_TYPE_MISSILEGUN
    };
    // The default key (hkKeyboardCommand 'q').
    enum { HK_KEY_Q = 0x71 };

    // hkpFirstPersonGun::sweepSphere's result (Havok's name): the hit position and normal, the shape key and
    // the body hit (hkpBallGun::fireGun aims at m_position).
    struct SweepSphereOut {
        hkVector4 m_position;   // +0x0
        hkVector4 m_normal;     // +0x10
        hkUint32 m_shapeKey;    // +0x20
        hkpRigidBody *m_body;   // +0x24
    };

    hkpFirstPersonGun();
    // Out of line (82DF0AD8).
    hkpFirstPersonGun(hkFinishLoadedObjectFlag flag);
    virtual ~hkpFirstPersonGun();
    virtual void initGun(hkpWorld *world) {}                                          // +0xC
    virtual void fireGun(hkpWorld *world, const hkTransform &viewTransform) {}        // +0x10
    virtual void stepGun(hkReal timeStep, hkpWorld *world, const hkpRigidBody *characterBody,
                         const hkTransform &viewTransform, bool fire, bool fireRmb) {}   // +0x14
    virtual void quitGun(hkpWorld *world);                                            // +0x18
    virtual const char *getName() const;                                              // +0x1C
    virtual void reset(hkpWorld *world) {}                                            // +0x20

    // Out of line, kept under their fn_ names (C units): 82DF0890 sweeps a sphere through the world and returns
    // 0 (HK_SUCCESS) on a hit, 82DF0778 computes the launch velocity that reaches a target under gravity.
    static int HK_CALL sweepSphere(const hkpWorld *world, const hkVector4 &sweepStart, hkReal radius,
                                   const hkVector4 &sweepEnd, SweepSphereOut &out);
    static void HK_CALL calcVelocityToTarget(const hkVector4 &position, const hkVector4 &target,
                                             const hkVector4 &gravity, hkReal speed, hkVector4 &velocity);

    hkEnum<Type, hkUint8> m_type;                             // +0x8
    hkStringPtr m_name;                                       // +0xC
    hkUint8 m_keyboardKey;                                    // +0x10 hkEnum<hkKeyboardCommand, hkUint8>
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;   // +0x14
};

extern "C" {
int fn_82DF0890(const hkpWorld *world, const hkVector4 &sweepStart, hkReal radius, const hkVector4 &sweepEnd,
                hkpFirstPersonGun::SweepSphereOut &out);
void fn_82DF0778(const hkVector4 &position, const hkVector4 &target, const hkVector4 &gravity, hkReal speed,
                 hkVector4 &velocity);
}

inline int HK_CALL hkpFirstPersonGun::sweepSphere(const hkpWorld *world, const hkVector4 &sweepStart, hkReal radius,
                                                  const hkVector4 &sweepEnd, SweepSphereOut &out)
{
    return fn_82DF0890(world, sweepStart, radius, sweepEnd, out);
}

inline void HK_CALL hkpFirstPersonGun::calcVelocityToTarget(const hkVector4 &position, const hkVector4 &target,
                                                            const hkVector4 &gravity, hkReal speed,
                                                            hkVector4 &velocity)
{
    fn_82DF0778(position, target, gravity, speed, velocity);
}

#endif
