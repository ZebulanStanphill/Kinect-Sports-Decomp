// hkpMotion and its subclasses (Physics/Dynamics/Motion/hkpMotion.h and
// Motion/Rigid/*.h). The hierarchy is the RTTI's:
//   hkpMotion
//     hkpKeyframedRigidMotion
//       hkpFixedRigidMotion
//       hkpMaxSizeMotion
//     hkpBoxMotion
//       hkpThinBoxMotion
//     hkpSphereMotion
//     hkpCharacterMotion
// hkpMotion is 0x120 bytes and none of the subclasses adds a member.
#ifndef HAVOK_HKPMOTION_H
#define HAVOK_HKPMOTION_H

#include "havok/hkBase.h"
#include "havok/hkHalf.h"
#include "havok/hkMotionState.h"
#include "havok/hkQuaternion.h"

class hkpMotion;
class hkpMaxSizeMotion;
extern "C" hkReal fn_82D93128(const hkpMotion *self);   // hkpMotion::getMass

class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum MotionType {
        MOTION_INVALID,
        MOTION_DYNAMIC,
        MOTION_SPHERE_INERTIA,
        MOTION_BOX_INERTIA,
        MOTION_KEYFRAMED,
        MOTION_FIXED,
        MOTION_THIN_BOX_INERTIA,
        MOTION_CHARACTER,
        MOTION_MAX_ID
    };

    hkpMotion(const hkVector4 &position, const hkQuaternion &rotation, bool wantDeactivation = false);
    // The finish constructor sets the gravity factor to 1.0f; copying the
    // literal to a float local keeps the stack copy that hkHalf's assignment
    // reads as an int.
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag)
    {
        if (flag.m_finishing)
        {
            hkReal one = 1.0f;
            m_gravityFactor = one;
        }
    }
    // The default constructor (hkpMaxSizeMotion's uses it) stores only the
    // vtable and m_savedMotion.
    HK_FORCE_INLINE hkpMotion() : hkReferencedObject(hkFinishLoadedObjectFlag()) { m_savedMotion = HK_NULL; }

    virtual void setMass(hkReal m);                                   // +0x0C
    virtual void setMassInv(hkReal mInv);                             // +0x10
    virtual void getInertiaLocal(hkMatrix3 &inertiaOut) const;        // +0x14
    virtual void getInertiaWorld(hkMatrix3 &inertiaOut) const;        // +0x18
    virtual void setInertiaLocal(const hkMatrix3 &inertia);           // +0x1C
    virtual void setInertiaInvLocal(const hkMatrix3 &inertiaInv);     // +0x20
    virtual void getInertiaInvLocal(hkMatrix3 &inertiaInvOut) const;  // +0x24
    virtual void getInertiaInvWorld(hkMatrix3 &inertiaInvOut) const;  // +0x28
    virtual void setCenterOfMassInLocal(const hkVector4 &centerOfMass);   // +0x2C
    virtual void setPosition(const hkVector4 &position);              // +0x30
    virtual void setRotation(const hkQuaternion &rotation);           // +0x34
    virtual void setPositionAndRotation(const hkVector4 &p, const hkQuaternion &r);   // +0x38
    virtual void setTransform(const hkTransform &t);                  // +0x3C
    virtual void setLinearVelocity(const hkVector4 &v);               // +0x40
    virtual void setAngularVelocity(const hkVector4 &v);              // +0x44
    virtual void getProjectedPointVelocity(const hkVector4 &p, const hkVector4 &n, hkReal &v, hkReal &m) const;   // +0x48
    virtual void applyLinearImpulse(const hkVector4 &imp);            // +0x4C
    virtual void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p);   // +0x50
    virtual void applyAngularImpulse(const hkVector4 &imp);           // +0x54
    virtual void applyPointForce(hkReal dt, const hkVector4 &f, const hkVector4 &p);   // +0x58
    virtual void applyForce(hkReal dt, const hkVector4 &f);           // +0x5C
    virtual void applyTorque(hkReal dt, const hkVector4 &t);          // +0x60
    virtual void getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut);   // +0x64
    virtual void setStepPosition(hkReal position, hkReal timestep);   // +0x68
    virtual void setStoredMotion(hkpMaxSizeMotion *savedMotion);      // +0x6C

    HK_FORCE_INLINE hkReal getMass() const { return fn_82D93128(this); }
    HK_FORCE_INLINE int getType() const { return m_type; }
    hkMotionState *getMotionState() { return &m_motionState; }

    hkUint8 m_type;                                // +0x8   hkEnum<MotionType, hkUint8>
    hkUint8 m_deactivationIntegrateCounter;        // +0x9
    hkUint16 m_deactivationNumInactiveFrames[2];   // +0xA
    hkMotionState m_motionState;                   // +0x10
    hkVector4 m_inertiaAndMassInv;                 // +0xC0
    hkVector4 m_linearVelocity;                    // +0xD0
    hkVector4 m_angularVelocity;                   // +0xE0
    hkVector4 m_deactivationRefPosition[2];        // +0xF0
    hkUint32 m_deactivationRefOrientation[2];      // +0x110
    hkpMaxSizeMotion *m_savedMotion;               // +0x118
    hkUint16 m_savedQualityTypeIndex;              // +0x11C
    hkHalf m_gravityFactor;                        // +0x11E
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    hkpKeyframedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
    hkpKeyframedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
    HK_FORCE_INLINE hkpKeyframedRigidMotion() {}
    virtual ~hkpKeyframedRigidMotion();
};

class hkpFixedRigidMotion : public hkpKeyframedRigidMotion {
public:
    hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
    hkpFixedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
};

class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpMaxSizeMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
    HK_FORCE_INLINE hkpMaxSizeMotion() {}
};

class hkpBoxMotion : public hkpMotion {
public:
    hkpBoxMotion(const hkVector4 &position, const hkQuaternion &rotation);
    hkpBoxMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpThinBoxMotion : public hkpBoxMotion {
public:
    hkpThinBoxMotion(const hkVector4 &position, const hkQuaternion &rotation);
    hkpThinBoxMotion(hkFinishLoadedObjectFlag flag) : hkpBoxMotion(flag) {}
};

class hkpSphereMotion : public hkpMotion {
public:
    HK_FORCE_INLINE hkpSphereMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
    {
        m_type = MOTION_SPHERE_INERTIA;
    }
    hkpSphereMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpCharacterMotion : public hkpMotion {
public:
    HK_FORCE_INLINE hkpCharacterMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
    {
        m_type = MOTION_CHARACTER;
    }
    hkpCharacterMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

#endif
