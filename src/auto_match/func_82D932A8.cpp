#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkQuaternion
{
  public:
    hkVector4 m_vec;
};

extern "C" const float lbl_82131F88[]; // hkUFloat8 -> hkReal table

class hkUFloat8
{
  public:
    HK_FORCE_INLINE operator hkReal() const
    {
        return lbl_82131F88[m_value];
    }

    hkUint8 m_value;
};

class hkSweptTransform
{
  public:
    HK_FORCE_INLINE hkReal getBaseTime() const
    {
        return m_centerOfMass0(3);
    }

    HK_FORCE_INLINE hkReal getInvDeltaTime() const
    {
        return m_centerOfMass1(3);
    }

    hkVector4 m_centerOfMass0;     // +0x00 (w: base time)
    hkVector4 m_centerOfMass1;     // +0x10 (w: inverse delta time)
    hkQuaternion m_rotation0;      // +0x20
    hkQuaternion m_rotation1;      // +0x30
    hkVector4 m_centerOfMassLocal; // +0x40
};

class hkMotionState;
extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other); // hkMotionState::operator=

class hkMotionState
{
  public:
    HK_FORCE_INLINE void operator=(const hkMotionState &other)
    {
        m_transform = other.m_transform;
        m_sweptTransform = other.m_sweptTransform;
        m_deltaAngle = other.m_deltaAngle;
        m_objectRadius = other.m_objectRadius;
        m_linearDamping = other.m_linearDamping;
        m_angularDamping = other.m_angularDamping;
        m_maxLinearVelocity = other.m_maxLinearVelocity;
        m_maxAngularVelocity = other.m_maxAngularVelocity;
        m_deactivationClass = other.m_deactivationClass;
    }

    hkTransform m_transform;           // +0x00
    hkSweptTransform m_sweptTransform; // +0x40
    hkVector4 m_deltaAngle;            // +0x90
    hkReal m_objectRadius;             // +0xa0
    hkReal m_linearDamping;            // +0xa4
    hkReal m_angularDamping;           // +0xa8
    hkUFloat8 m_maxLinearVelocity;     // +0xac
    hkUFloat8 m_maxAngularVelocity;    // +0xad
    hkUint8 m_deactivationClass;       // +0xae
};

class hkpMotion;
class hkpMaxSizeMotion;
extern "C" hkReal fn_82D93128(const hkpMotion *self); // hkpMotion::getMass

class hkpMotion : public hkReferencedObject
{
  public:
    enum MotionType {
        MOTION_INVALID,
        MOTION_DYNAMIC,
        MOTION_SPHERE_INERTIA,
        MOTION_BOX_INERTIA,
        MOTION_KEYFRAMED,
        MOTION_FIXED,
        MOTION_THIN_BOX_INERTIA,
        MOTION_CHARACTER
    };

    // The default constructor (used by hkpMaxSizeMotion's) stores only the vtable and m_savedMotion.
    HK_FORCE_INLINE hkpMotion() : hkReferencedObject(hkFinishLoadedObjectFlag())
    {
        m_savedMotion = 0;
    }

    virtual void setMass(hkReal m);                                                 // +0x0c
    virtual void setMassInv(hkReal mInv);                                           // +0x10
    virtual void getInertiaLocal(hkMatrix3 &inertiaOut) const;                      // +0x14
    virtual void getInertiaWorld(hkMatrix3 &inertiaOut) const;                      // +0x18
    virtual void setInertiaLocal(const hkMatrix3 &inertia);                         // +0x1c
    virtual void setInertiaInvLocal(const hkMatrix3 &inertiaInv);                   // +0x20
    virtual void getInertiaInvLocal(hkMatrix3 &inertiaInvOut) const;                // +0x24
    virtual void getInertiaInvWorld(hkMatrix3 &inertiaInvOut) const;                // +0x28
    virtual void setCenterOfMassInLocal(const hkVector4 &com);                      // +0x2c
    virtual void setPosition(const hkVector4 &position);                            // +0x30
    virtual void setRotation(const hkQuaternion &rotation);                         // +0x34
    virtual void setPositionAndRotation(const hkVector4 &p, const hkQuaternion &r); // +0x38
    virtual void setTransform(const hkTransform &t);                                // +0x3c
    virtual void setLinearVelocity(const hkVector4 &v);                             // +0x40
    virtual void setAngularVelocity(const hkVector4 &v);                            // +0x44
    virtual void getProjectedPointVelocity(const hkVector4 &p, const hkVector4 &n, hkReal &v,
                                           hkReal &m) const;                           // +0x48
    virtual void applyLinearImpulse(const hkVector4 &imp);                             // +0x4c
    virtual void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p);          // +0x50
    virtual void applyAngularImpulse(const hkVector4 &imp);                            // +0x54
    virtual void applyPointForce(hkReal dt, const hkVector4 &f, const hkVector4 &p);   // +0x58
    virtual void applyForce(hkReal dt, const hkVector4 &f);                            // +0x5c
    virtual void applyTorque(hkReal dt, const hkVector4 &t);                           // +0x60
    virtual void getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut); // +0x64
    virtual void setStepPosition(hkReal position, hkReal timestep);                    // +0x68
    virtual void setStoredMotion(hkpMaxSizeMotion *savedMotion);                       // +0x6c

    HK_FORCE_INLINE hkReal getMass() const
    {
        return fn_82D93128(this);
    }

    HK_FORCE_INLINE int getType() const
    {
        return m_type;
    }

    HK_FORCE_INLINE void setWorldSelectFlagsNeg(int worldFlag0, int worldFlag1,
                                                int worldDeactivationIntegrateCounter)
    {
        hkUint32 f0 =
            (hkUint32(worldDeactivationIntegrateCounter & 3) < hkUint32(m_deactivationIntegrateCounter & 3))
                ? (~worldFlag0 << 14)
                : (worldFlag0 << 14);
        hkUint32 f1 = (worldDeactivationIntegrateCounter < m_deactivationIntegrateCounter)
                          ? (~worldFlag1 << 14)
                          : (worldFlag1 << 14);
        m_deactivationNumInactiveFrames[0] = (m_deactivationNumInactiveFrames[0] & 0x3fff) | f0;
        m_deactivationNumInactiveFrames[1] = (m_deactivationNumInactiveFrames[1] & 0x3fff) | f1;
    }

    hkUint8 m_type;                              // +0x08
    hkUint8 m_deactivationIntegrateCounter;      // +0x09
    hkUint16 m_deactivationNumInactiveFrames[2]; // +0x0a
    hkMotionState m_motionState;                 // +0x10
    hkVector4 m_inertiaAndMassInv;               // +0xc0
    hkVector4 m_linearVelocity;                  // +0xd0
    hkVector4 m_angularVelocity;                 // +0xe0
    hkVector4 m_deactivationRefPosition[2];      // +0xf0
    hkUint32 m_deactivationRefOrientation[2];    // +0x110
    hkpMaxSizeMotion *m_savedMotion;             // +0x118
    hkUint16 m_savedQualityTypeIndex;            // +0x11c
    hkUint16 m_gravityFactor;                    // +0x11e
};

void hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut)
{
    motionOut->m_motionState = m_motionState;
    motionOut->m_linearVelocity = m_linearVelocity;
    motionOut->m_angularVelocity = m_angularVelocity;
    motionOut->m_deactivationIntegrateCounter = m_deactivationIntegrateCounter;
}
