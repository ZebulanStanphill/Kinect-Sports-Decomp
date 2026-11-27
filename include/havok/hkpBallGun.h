// hkpBallGun (Physics/Utilities/Weapons/hkpBallGun.h, the folder of its class unit), 0x60 bytes: an
// hkpFirstPersonGun that fires spheres and keeps the last ones in a queue. The layout comes from the
// constructor (82DEF318: the four floats at +0x20..+0x2C, r4 at +0x30, a zero vector at +0x40,
// m_type = WEAPON_TYPE_BALLGUN, m_name = "BallGun", then a new 0x14-byte queue at +0x50 sized by +0x30),
// fireGun (82DEF548) and the destructor (82DEF408, which drains the queue). The 12 bytes before +0x40 are
// only the vector's alignment. The member names follow Havok's header.
#ifndef HAVOK_HKPBALLGUN_H
#define HAVOK_HKPBALLGUN_H

#include "havok/hkpFirstPersonGun.h"

template <typename T> class hkQueue;

// ??_7hkpBallGun@@6B@: fireGun is 82DEF548 and reset 82DEF1A0 (removes every queued body from its world).
class hkpBallGun : public hkpFirstPersonGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    // Out of line (82DEF318, ??0hkpBallGun@@QAA@XZ, which hkpMountedBallGun's constructor calls without
    // setting r4). Unexplained: the function stores r4 as m_maxBulletsInWorld, as if it took the number of
    // bullets as Havok's constructor does.
    hkpBallGun();
    // Out of line (82DEF270).
    hkpBallGun(hkFinishLoadedObjectFlag flag);
    virtual ~hkpBallGun();
    virtual void fireGun(hkpWorld *world, const hkTransform &viewTransform);
    virtual void reset(hkpWorld *world);

    hkReal m_bulletRadius;                     // +0x20
    hkReal m_bulletVelocity;                   // +0x24
    hkReal m_bulletMass;                       // +0x28
    hkReal m_damageMultiplier;                 // +0x2C
    int m_maxBulletsInWorld;                   // +0x30
    hkVector4 m_bulletOffsetFromCenter;        // +0x40
    hkQueue<hkpRigidBody *> *m_addedBodies;    // +0x50 (+nosave)
};

#endif
