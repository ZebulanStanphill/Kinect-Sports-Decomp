// hkpWorldOperationUtil::replaceMotionObject(hkpRigidBody *, hkpMotion::MotionType, hkBool newStateNeedsInertia,
// hkBool oldStateNeedsInertia, hkpWorld *) (Physics/Dynamics/World/Util/hkpWorldOperationUtil.cpp): swaps the
// rigid body's in-place motion (an hkpMaxSizeMotion at +0xe0) for one of the new motion type, saving or restoring
// the dynamic motion when switching to or from fixed/keyframed. Havok code: built /O2 (flag file).
// The motion copies are hkString::memCpy16<sizeof(hkpMaxSizeMotion)> loops; the devirtualized calls on the
// local hkpMaxSizeMotion copies go to hkpMotion::getMotionStateAndVelocitiesAndDeactivationType (fn_82D932A8,
// renamed). hkpMotion::setWorldSelectFlagsNeg is the body of its out-of-line copy fn_82D80768 (that function
// matches with it at /O2); the world's flags are read through a pointer to the solver info's flag array.
#include "havok/hkBase.h"
#include "havok/hkString.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

class hkMatrix3 {
public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

extern "C" const float lbl_82131F88[];   // hkUFloat8 -> hkReal table
extern "C" const float lbl_82002AE0;     // 1.0f

class hkUFloat8 {
public:
    HK_FORCE_INLINE operator hkReal() const { return lbl_82131F88[m_value]; }
    hkUint8 m_value;
};

class hkSweptTransform {
public:
    HK_FORCE_INLINE hkReal getBaseTime() const { return m_centerOfMass0(3); }
    HK_FORCE_INLINE hkReal getInvDeltaTime() const { return m_centerOfMass1(3); }

    hkVector4 m_centerOfMass0;       // +0x00 (w: base time)
    hkVector4 m_centerOfMass1;       // +0x10 (w: inverse delta time)
    hkQuaternion m_rotation0;        // +0x20
    hkQuaternion m_rotation1;        // +0x30
    hkVector4 m_centerOfMassLocal;   // +0x40
};

class hkMotionState;
extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other);   // hkMotionState::operator=

class hkMotionState {
public:
    HK_FORCE_INLINE void operator=(const hkMotionState &other) { fn_82D92FF0(this, &other); }

    hkTransform m_transform;              // +0x00
    hkSweptTransform m_sweptTransform;    // +0x40
    hkVector4 m_deltaAngle;               // +0x90
    hkReal m_objectRadius;                // +0xa0
    hkReal m_linearDamping;               // +0xa4
    hkReal m_angularDamping;              // +0xa8
    hkUFloat8 m_maxLinearVelocity;        // +0xac
    hkUFloat8 m_maxAngularVelocity;       // +0xad
    hkUint8 m_deactivationClass;          // +0xae
};

class hkpMotion;
class hkpMaxSizeMotion;
extern "C" hkReal fn_82D93128(const hkpMotion *self);   // hkpMotion::getMass

class hkpMotion : public hkReferencedObject {
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
    HK_FORCE_INLINE hkpMotion() : hkReferencedObject(hkFinishLoadedObjectFlag()) { m_savedMotion = 0; }

    virtual void setMass(hkReal m);                                   // +0x0c
    virtual void setMassInv(hkReal mInv);                             // +0x10
    virtual void getInertiaLocal(hkMatrix3 &inertiaOut) const;        // +0x14
    virtual void getInertiaWorld(hkMatrix3 &inertiaOut) const;        // +0x18
    virtual void setInertiaLocal(const hkMatrix3 &inertia);           // +0x1c
    virtual void setInertiaInvLocal(const hkMatrix3 &inertiaInv);     // +0x20
    virtual void getInertiaInvLocal(hkMatrix3 &inertiaInvOut) const;  // +0x24
    virtual void getInertiaInvWorld(hkMatrix3 &inertiaInvOut) const;  // +0x28
    virtual void setCenterOfMassInLocal(const hkVector4 &com);        // +0x2c
    virtual void setPosition(const hkVector4 &position);              // +0x30
    virtual void setRotation(const hkQuaternion &rotation);           // +0x34
    virtual void setPositionAndRotation(const hkVector4 &p, const hkQuaternion &r);  // +0x38
    virtual void setTransform(const hkTransform &t);                  // +0x3c
    virtual void setLinearVelocity(const hkVector4 &v);               // +0x40
    virtual void setAngularVelocity(const hkVector4 &v);              // +0x44
    virtual void getProjectedPointVelocity(const hkVector4 &p, const hkVector4 &n, hkReal &v, hkReal &m) const;  // +0x48
    virtual void applyLinearImpulse(const hkVector4 &imp);            // +0x4c
    virtual void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p);   // +0x50
    virtual void applyAngularImpulse(const hkVector4 &imp);           // +0x54
    virtual void applyPointForce(hkReal dt, const hkVector4 &f, const hkVector4 &p);  // +0x58
    virtual void applyForce(hkReal dt, const hkVector4 &f);           // +0x5c
    virtual void applyTorque(hkReal dt, const hkVector4 &t);          // +0x60
    virtual void getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *motionOut);  // +0x64
    virtual void setStepPosition(hkReal position, hkReal timestep);   // +0x68
    virtual void setStoredMotion(hkpMaxSizeMotion *savedMotion);      // +0x6c

    HK_FORCE_INLINE hkReal getMass() const { return fn_82D93128(this); }
    HK_FORCE_INLINE int getType() const { return m_type; }
    HK_FORCE_INLINE void setWorldSelectFlagsNeg(int worldFlag0, int worldFlag1, int worldDeactivationIntegrateCounter)
    {
        hkUint32 f0 = (hkUint32(worldDeactivationIntegrateCounter & 3) < hkUint32(m_deactivationIntegrateCounter & 3)) ? (~worldFlag0 << 14) : (worldFlag0 << 14);
        hkUint32 f1 = (worldDeactivationIntegrateCounter < m_deactivationIntegrateCounter) ? (~worldFlag1 << 14) : (worldFlag1 << 14);
        m_deactivationNumInactiveFrames[0] = (m_deactivationNumInactiveFrames[0] & 0x3fff) | f0;
        m_deactivationNumInactiveFrames[1] = (m_deactivationNumInactiveFrames[1] & 0x3fff) | f1;
    }

    hkUint8 m_type;                                // +0x08
    hkUint8 m_deactivationIntegrateCounter;        // +0x09
    hkUint16 m_deactivationNumInactiveFrames[2];   // +0x0a
    hkMotionState m_motionState;                   // +0x10
    hkVector4 m_inertiaAndMassInv;                 // +0xc0
    hkVector4 m_linearVelocity;                    // +0xd0
    hkVector4 m_angularVelocity;                   // +0xe0
    hkVector4 m_deactivationRefPosition[2];        // +0xf0
    hkUint32 m_deactivationRefOrientation[2];      // +0x110
    hkpMaxSizeMotion *m_savedMotion;               // +0x118
    hkUint16 m_savedQualityTypeIndex;              // +0x11c
    hkUint16 m_gravityFactor;                      // +0x11e
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    HK_FORCE_INLINE hkpKeyframedRigidMotion() {}
    hkpKeyframedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
    ~hkpKeyframedRigidMotion();
};

class hkpFixedRigidMotion : public hkpKeyframedRigidMotion {
public:
    hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
};

class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpMaxSizeMotion() {}
};

template <int SIZE>
static HK_FORCE_INLINE void memCpy16(void *dst, const void *src)
{
    const hkUint32 *src32 = (const hkUint32 *)src;
    hkUint32 *dst32 = (hkUint32 *)dst;
    for (int i = 0; i < SIZE / 16; i++)
    {
        dst32[0] = src32[0];
        dst32[1] = src32[1];
        dst32[2] = src32[2];
        dst32[3] = src32[3];
        dst32 += 4;
        src32 += 4;
    }
}

class hkpShape;
class hkpWorld;

class hkpRigidBody {
public:
    HK_FORCE_INLINE hkpMotion *getMotion() { return &m_motion; }

    char m_pad0[0x10];
    const hkpShape *m_shape;             // +0x10 m_collidable.m_shape
    hkUint32 m_shapeKey;                 // +0x14
    const void *m_collidableMotion;      // +0x18 m_collidable.m_motion
    char m_pad1c[0x2a - 0x1c];
    hkInt8 m_objectQualityType;          // +0x2a m_collidable.m_broadPhaseHandle.m_objectQualityType
    char m_pad2b[0xa4 - 0x2b];
    hkUint32 m_a4;                       // +0xa4
    char m_pada8[0xe0 - 0xa8];
    hkpMaxSizeMotion m_motion;           // +0xe0
    char m_after[0x10];                  // +0x200
};

struct hkpSolverInfo {
    char m_pad[0x125];
    hkUint8 m_deactivationNumInactiveFramesSelectFlag[2];   // +0x125
    hkUint8 m_deactivationIntegrateCounter;                 // +0x127
};

class hkpWorld {
public:
    char m_pad[0x1e0];
    hkpSolverInfo m_solverInfo;   // +0x1e0 (m_dynamicsStepInfo.m_solverInfo)
};

extern "C" {
hkReal fn_82D80A40(const hkpWorld *world);   // hkpWorld::getCurrentTime
void fn_83081390(hkReal time, hkMotionState *ms);   // hkSweptTransformUtil::freezeMotionState
void fn_82D899D8(hkpRigidBody *body, hkpWorld *world, const hkpShape *shape);
void fn_82D8B4B8(int motionType, const hkVector4 *position, const hkQuaternion *rotation, hkReal mass,
                 const hkMatrix3 *inertiaLocal, const hkVector4 *centreOfMassLocal, hkReal maxLinearVelocity,
                 hkReal maxAngularVelocity, hkpMaxSizeMotion *motionBuffer);   // hkpRigidBody::createDynamicRigidMotion
}

extern "C" void fn_82D8F080(hkpRigidBody *body, int newState, hkBool newStateNeedsInertia, hkBool oldStateNeedsInertia,
                            hkpWorld *world)
{
    if (newStateNeedsInertia)
    {
        if (!oldStateNeedsInertia)
        {
            hkpMaxSizeMotion *savedMotion = body->getMotion()->m_savedMotion;
            body->getMotion()->getMotionStateAndVelocitiesAndDeactivationType(savedMotion);
            savedMotion->m_deactivationNumInactiveFrames[0] = 0;
            savedMotion->m_deactivationNumInactiveFrames[1] = 0;
            body->m_objectQualityType = hkInt8(body->getMotion()->m_savedQualityTypeIndex);
            memCpy16<sizeof(hkpMaxSizeMotion)>(body->getMotion(), savedMotion);
            hkString::memSet(body->m_after, 0, 0);
            savedMotion->removeReference();
            fn_82D899D8(body, world, body->m_shape);
        }
        if (body->getMotion()->getType() != newState && newState != hkpMotion::MOTION_DYNAMIC)
        {
            hkpMotion *motion = body->getMotion();
            hkpMaxSizeMotion oldMotion;
            memCpy16<sizeof(hkpMaxSizeMotion)>(&oldMotion, body->getMotion());
            hkMatrix3 inertiaLocal;
            motion->getInertiaLocal(inertiaLocal);
            fn_82D8B4B8(newState, &oldMotion.m_motionState.m_transform.m_translation,
                        &oldMotion.m_motionState.m_sweptTransform.m_rotation1, oldMotion.getMass(), &inertiaLocal,
                        &oldMotion.m_motionState.m_sweptTransform.m_centerOfMassLocal,
                        oldMotion.m_motionState.m_maxLinearVelocity, oldMotion.m_motionState.m_maxAngularVelocity,
                        (hkpMaxSizeMotion *)motion);
            oldMotion.getMotionStateAndVelocitiesAndDeactivationType(motion);
            motion->m_motionState.m_linearDamping = oldMotion.m_motionState.m_linearDamping;
            motion->m_motionState.m_angularDamping = oldMotion.m_motionState.m_angularDamping;
        }
    }
    else
    {
        hkpMotion *motion = body->getMotion();
        hkpMaxSizeMotion oldMotion;
        memCpy16<sizeof(hkpMaxSizeMotion)>(&oldMotion, body->getMotion());
        hkpMotion *newMotion;
        if (newState == hkpMotion::MOTION_FIXED)
        {
            newMotion = new (motion) hkpFixedRigidMotion(body->m_motion.m_motionState.m_transform.m_translation,
                                                         body->m_motion.m_motionState.m_sweptTransform.m_rotation1);
            newMotion->m_motionState = oldMotion.m_motionState;
            newMotion->m_deactivationIntegrateCounter = oldMotion.m_deactivationIntegrateCounter;
            hkReal invDeltaTime = oldMotion.m_motionState.m_sweptTransform.getInvDeltaTime();
            if (invDeltaTime != 0.0f)
            {
                hkReal time;
                if (world)
                    time = fn_82D80A40(world);
                else
                    time = lbl_82002AE0 / invDeltaTime + oldMotion.m_motionState.m_sweptTransform.getBaseTime();
                fn_83081390(time, &newMotion->m_motionState);
            }
        }
        else
        {
            newMotion = new (motion) hkpKeyframedRigidMotion(body->m_motion.m_motionState.m_transform.m_translation,
                                                             body->m_motion.m_motionState.m_sweptTransform.m_rotation1);
            oldMotion.getMotionStateAndVelocitiesAndDeactivationType(newMotion);
        }

        if (oldStateNeedsInertia)
        {
            hkpMaxSizeMotion *savedMotion = new hkpMaxSizeMotion();
            hkUint16 memSizeAndFlags = savedMotion->m_memSizeAndFlags;
            memCpy16<sizeof(hkpMaxSizeMotion)>(savedMotion, &oldMotion);
            savedMotion->m_memSizeAndFlags = memSizeAndFlags;
            savedMotion->m_referenceCount = 1;
            newMotion->m_savedMotion = savedMotion;
            newMotion->m_savedQualityTypeIndex = body->m_objectQualityType;
            fn_82D899D8(body, world, body->m_shape);
        }
        else
        {
            newMotion->setStoredMotion(oldMotion.m_savedMotion);
            newMotion->m_savedQualityTypeIndex = oldMotion.m_savedQualityTypeIndex;
        }
        body->m_a4 = 0;
        body->m_objectQualityType = hkInt8(newState != hkpMotion::MOTION_FIXED);
    }

    body->m_collidableMotion = &body->m_motion.m_motionState;
    if (world)
    {
        hkpMotion *motion = body->getMotion();
        const hkpSolverInfo &si = world->m_solverInfo;
        const hkUint8 *fl = &si.m_deactivationNumInactiveFramesSelectFlag[0];
        motion->setWorldSelectFlagsNeg(fl[0], fl[1], si.m_deactivationIntegrateCounter);
    }
}
