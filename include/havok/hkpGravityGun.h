// hkpGravityGun (Physics/Utilities/Weapons/hkpGravityGun.h, the folder of its class unit), 0x60 bytes: an
// hkpFirstPersonGun that picks up bodies and throws them. The layout comes from the constructor (82DF15B0:
// an empty array at +0x20, 10, 200.0f, 50.0f, 100.0f and 50.0f at +0x2C..+0x3C, then the vectors (2.5, 0.6,
// 0) at +0x40 and (0, 1, 0) at +0x50) and from the finish constructor (82DF1670), which default-constructs
// the array (+nosave). The member names follow Havok's header.
#ifndef HAVOK_HKPGRAVITYGUN_H
#define HAVOK_HKPGRAVITYGUN_H

#include "havok/hkpFirstPersonGun.h"

// ??_7hkpGravityGun@@6B@: stepGun is 82DF13F0 and reset 82DF1220 (releases the grabbed bodies). The game has
// no ??1hkpGravityGun: the destructor is the implicit one, which the deleting destructor (82DF16E0) inlines
// (it frees the array and calls ~hkpFirstPersonGun, without storing the vtable; a user-declared
// `virtual ~hkpGravityGun() {}` stores it).
class hkpGravityGun : public hkpFirstPersonGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpGravityGun();
    // Out of line (82DF1670).
    hkpGravityGun(hkFinishLoadedObjectFlag flag);
    virtual void stepGun(hkReal timeStep, hkpWorld *world, const hkpRigidBody *characterBody,
                         const hkTransform &viewTransform, bool fire, bool fireRmb);
    virtual void reset(hkpWorld *world);

    hkArray<hkpRigidBody *> m_grabbedBodies;     // +0x20 (+nosave)
    int m_maxNumObjectsPicked;                   // +0x2C
    hkReal m_maxMassOfObjectPicked;              // +0x30
    hkReal m_maxDistOfObjectPicked;              // +0x34
    hkReal m_impulseAppliedWhenObjectNotPicked;  // +0x38
    hkReal m_throwVelocity;                      // +0x3C
    hkVector4 m_capturedObjectPosition;          // +0x40
    hkVector4 m_capturedObjectsOffset;           // +0x50
};

#endif
