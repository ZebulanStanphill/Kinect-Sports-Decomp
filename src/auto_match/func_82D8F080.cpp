// hkpWorldOperationUtil::replaceMotionObject(hkpRigidBody *, hkpMotion::MotionType, hkBool newStateNeedsInertia,
// hkBool oldStateNeedsInertia, hkpWorld *) (Physics/Dynamics/World/Util/hkpWorldOperationUtil.cpp): swaps the
// rigid body's in-place motion (an hkpMaxSizeMotion at +0xe0) for one of the new motion type, saving or restoring
// the dynamic motion when switching to or from fixed/keyframed. Havok code: built /O2 (flag file).
// The motion copies are hkString::memCpy16<sizeof(hkpMaxSizeMotion)> loops; the devirtualized calls on the
// local hkpMaxSizeMotion copies go to hkpMotion::getMotionStateAndVelocitiesAndDeactivationType (fn_82D932A8,
// renamed). hkpMotion::setWorldSelectFlagsNeg is the body of its out-of-line copy (82D80768; that function
// matches with it at /O2); the world's flags are read through a pointer to the solver info's flag array.
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"


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
            hkpMaxSizeMotion *savedMotion = body->getRigidMotion()->m_savedMotion;
            body->getRigidMotion()->getMotionStateAndVelocitiesAndDeactivationType(savedMotion);
            savedMotion->m_deactivationNumInactiveFrames[0] = 0;
            savedMotion->m_deactivationNumInactiveFrames[1] = 0;
            body->m_collidable.m_broadPhaseHandle.m_objectQualityType = hkInt8(body->getRigidMotion()->m_savedQualityTypeIndex);
            memCpy16<sizeof(hkpMaxSizeMotion)>(body->getRigidMotion(), savedMotion);
            // A memSet of no bytes at the end of the motion: nothing of the max-size motion is left over.
            hkString::memSet(&body->m_motion + 1, 0, 0);
            savedMotion->removeReference();
            fn_82D899D8(body, world, body->m_collidable.getShape());
        }
        if (body->getRigidMotion()->getType() != newState && newState != hkpMotion::MOTION_DYNAMIC)
        {
            hkpMotion *motion = body->getRigidMotion();
            hkpMaxSizeMotion oldMotion;
            memCpy16<sizeof(hkpMaxSizeMotion)>(&oldMotion, body->getRigidMotion());
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
        hkpMotion *motion = body->getRigidMotion();
        hkpMaxSizeMotion oldMotion;
        memCpy16<sizeof(hkpMaxSizeMotion)>(&oldMotion, body->getRigidMotion());
        hkpMotion *newMotion;
        if (newState == hkpMotion::MOTION_FIXED)
        {
            newMotion = new (motion) hkpFixedRigidMotion(body->m_motion.m_motionState.m_transform.m_translation,
                                                         body->m_motion.m_motionState.m_sweptTransform.m_rotation1);
            // hkMotionState's implicit assignment is a call here (its out-of-line copy is 82D92FF0).
            hkMotionState &(hkMotionState::*assign)(const hkMotionState &) = &hkMotionState::operator=;
            (newMotion->m_motionState.*assign)(oldMotion.m_motionState);
            newMotion->m_deactivationIntegrateCounter = oldMotion.m_deactivationIntegrateCounter;
            hkReal invDeltaTime = oldMotion.m_motionState.m_sweptTransform.getInvDeltaTime();
            if (invDeltaTime != 0.0f)
            {
                hkReal time;
                if (world)
                    time = fn_82D80A40(world);
                else
                    time = 1.0f / invDeltaTime + oldMotion.m_motionState.m_sweptTransform.getBaseTime();
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
            newMotion->m_savedQualityTypeIndex = body->m_collidable.m_broadPhaseHandle.m_objectQualityType;
            fn_82D899D8(body, world, body->m_collidable.getShape());
        }
        else
        {
            newMotion->setStoredMotion(oldMotion.m_savedMotion);
            newMotion->m_savedQualityTypeIndex = oldMotion.m_savedQualityTypeIndex;
        }
        body->m_solverData = 0;
        body->m_collidable.m_broadPhaseHandle.m_objectQualityType = hkInt8(newState != hkpMotion::MOTION_FIXED);
    }

    body->m_collidable.m_motion = &body->m_motion.m_motionState;
    if (world)
    {
        hkpMotion *motion = body->getRigidMotion();
        const hkpSolverInfo &si = world->m_solverInfo;
        const hkUint8 *fl = &si.m_deactivationNumInactiveFramesSelectFlag[0];
        motion->setWorldSelectFlagsNeg(fl[0], fl[1], si.m_deactivationIntegrateCounter);
    }
}
