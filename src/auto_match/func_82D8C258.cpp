// hkpRigidBody::hkpRigidBody(const hkpRigidBodyCinfo &info) (Physics/Dynamics/Entity/hkpRigidBody.cpp): the
// hkpEntity base constructor, then the body from the construction info. Names of locals and callees follow
// Havok 2010 and are not all confirmed.
// - hkMath::min2 on Xbox 360 is __fsel(x - y, y, x).
// - The fixed motion's placement new is written with an explicit null test on a local: a plain
//   `new (&m_motion)` fuses the check into addic. and keeps &m_motion out of the dominating block,
//   while the original computes it once before the branch (cmplwi) and still folds the motion's
//   vtable loads into 0xe0(this).
// - The local frame is assigned (which adds a reference) and then referenced once more, as in the original.
// - 0.2f is a literal (lbl_82002C2C renamed to __real@3e4ccccd): with an extern float the multiply
//   puts the loaded constant first. 0.1f is a literal too; symbols.txt already names its constant
//   __real@3dcccccd, so declaring it as an lbl_ extern references a symbol the original lacks.
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpSolverInfo.h"

extern "C" double __fsel(double, double, double);

// hkpWorld: only the solver info, whose deactivation settings this constructor passes on.
class hkpWorld {
public:
    char m_pad[0x1e0];
    hkpSolverInfo m_solverInfo;   // +0x1e0 (m_dynamicsStepInfo.m_solverInfo)
};

extern "C" {
void fn_82D93120(hkpMotion *, int);
void fn_82D8B4B8(int, const hkVector4 &, const hkQuaternion &, float, const hkMatrix3 &, const hkVector4 &, float, float, hkpMotion *);
void fn_82D8B2F8(hkpMotion *, int, unsigned int, unsigned char, unsigned char, unsigned char);
unsigned char fn_83095E98(const hkpShape *);
void fn_82D8B400(hkpRigidBody *, const hkpShape *, hkVector4 *);
}

static HK_FORCE_INLINE float min2(float x, float y) { return (float)__fsel(x - y, y, x); }

hkpRigidBody::hkpRigidBody(const hkpRigidBodyCinfo &info) : hkpEntity(info.m_shape)
{
    m_material.m_responseType = info.m_collisionResponse;
    m_contactPointCallbackDelay = info.m_contactPointCallbackDelay;
    m_collidable.setCollisionFilterInfo(info.m_collisionFilterInfo);
    if (info.m_localFrame) {
        m_localFrame = info.m_localFrame;
        m_localFrame->addReference();
    }
    float depth;
    if (info.m_motionType == 5) {
        void *mem = &m_motion;
        hkpFixedRigidMotion *fm = mem ? new (mem) hkpFixedRigidMotion(info.m_position, info.m_rotation) : 0;
        fm->m_motionState.m_maxLinearVelocity = info.m_maxLinearVelocity;
        fm->m_motionState.m_maxAngularVelocity = info.m_maxAngularVelocity;
        fn_82D93120(fm, 1);
        m_collidable.setMotionState(getRigidMotion()->getMotionState());
        depth = info.m_allowedPenetrationDepth;
        if (depth <= 0.0f) depth = 3.40282e+38f;
    } else {
        fn_82D8B4B8(info.m_motionType, info.m_position, info.m_rotation, info.m_mass, info.m_inertiaTensor, info.m_centerOfMass, info.m_maxLinearVelocity, info.m_maxAngularVelocity, getRigidMotion());
        fn_82D93120(getRigidMotion(), info.m_solverDeactivation);
        setLinearVelocity(info.m_linearVelocity);
        setAngularVelocity(info.m_angularVelocity);
        m_collidable.setMotionState(getRigidMotion()->getMotionState());
        depth = info.m_allowedPenetrationDepth;
    }
    m_collidable.m_allowedPenetrationDepth = depth;
    if (info.m_enableDeactivation) {
        hkpWorld *w = m_world;
        if (w) fn_82D8B2F8(getRigidMotion(), 1, m_uid, w->m_solverInfo.m_deactivationNumInactiveFramesSelectFlag[0],
                               w->m_solverInfo.m_deactivationNumInactiveFramesSelectFlag[1],
                               w->m_solverInfo.m_deactivationIntegrateCounter);
        else fn_82D8B2F8(getRigidMotion(), 1, m_uid, 0, 0, 0);
    } else {
        fn_82D8B2F8(getRigidMotion(), 0, 0, 0, 0, 0);
    }
    getRigidMotion()->m_motionState.m_linearDamping = info.m_linearDamping;
    getRigidMotion()->m_motionState.m_angularDamping = info.m_angularDamping;
    if (m_collidable.getShape() != HK_NULL) {
        hkVector4 extents;
        fn_82D8B400(this, m_collidable.getShape(), &extents);
        if (m_collidable.m_allowedPenetrationDepth <= 0.0f) {
            float m = min2(min2(extents(0), extents(1)), extents(2));
            if (m < 0.5f) m_collidable.m_allowedPenetrationDepth = m * 0.2f;
            else m_collidable.m_allowedPenetrationDepth = 0.1f;
        }
    }
    if (info.m_qualityType == -1) {
        if (m_motion.m_type == 5) m_collidable.m_broadPhaseHandle.m_objectQualityType = 0;
        else if (info.m_motionType == 4) m_collidable.m_broadPhaseHandle.m_objectQualityType = 1;
        else m_collidable.m_broadPhaseHandle.m_objectQualityType = 2;
    } else m_collidable.m_broadPhaseHandle.m_objectQualityType = info.m_qualityType;
    m_autoRemoveLevel = info.m_autoRemoveLevel;
    if (info.m_forceCollideOntoPpu) m_collidable.m_forceCollideOntoPpu |= 1;
    m_material.m_friction = info.m_friction;
    m_material.m_restitution = info.m_restitution;
    getRigidMotion()->m_gravityFactor = info.m_gravityFactor;
    if (info.m_numShapeKeysInContactPointProperties >= 0) m_numShapeKeysInContactPointProperties = info.m_numShapeKeysInContactPointProperties;
    else m_numShapeKeysInContactPointProperties = fn_83095E98(info.m_shape);
    m_responseModifierFlags = info.m_responseModifierFlags;
}
