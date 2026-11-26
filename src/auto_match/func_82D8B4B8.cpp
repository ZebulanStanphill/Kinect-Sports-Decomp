// hkpRigidBody::createDynamicRigidMotion(hkpMotion::MotionType, const hkVector4 &position,
// const hkQuaternion &rotation, hkReal mass, const hkMatrix3 &inertiaLocal,
// const hkVector4 &centreOfMass, hkReal maxLinearVelocity, hkReal maxAngularVelocity,
// hkpMaxSizeMotion *motionBufferOut) (Physics/Dynamics/Entity/hkpRigidBody.cpp): constructs the
// motion for the motion type in the caller's buffer (placement new, hence the null checks), then
// sets its inertia, centre of mass and mass (except for keyframed motions) and its velocity limits.
// A static member function; it keeps its fn_ name (callers are C units). Havok code: /O2 (flag file).
// The cases are in the order their code appears in the binary (sphere, box, thin box, dynamic, ...),
// which decides which duplicate constructor block the dynamic case shares. hkMath::max2/min2 take
// const references: by value, the shared (1,1) - (2,2) difference is computed twice. The 0.8f
// sphere test is a plain literal (symbols.txt names its constant __real@3f4ccccd).
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

extern "C" double __fsel(double a, double b, double c);   // PPC intrinsic

struct hkMath {
    static HK_FORCE_INLINE hkReal HK_CALL max2(const hkReal &x, const hkReal &y) { return hkReal(__fsel(x - y, x, y)); }
    static HK_FORCE_INLINE hkReal HK_CALL min2(const hkReal &x, const hkReal &y) { return hkReal(__fsel(x - y, y, x)); }
};

extern "C" void fn_82D8B4B8(hkpMotion::MotionType motionType, const hkVector4 &position, const hkQuaternion &rotation,
                            hkReal mass, const hkMatrix3 &inertiaLocal, const hkVector4 &centreOfMass,
                            hkReal maxLinearVelocity, hkReal maxAngularVelocity, hkpMaxSizeMotion *motionBufferOut)
{
    hkpMotion *motion;

    switch (motionType) {
    case hkpMotion::MOTION_SPHERE_INERTIA:
        motion = new (motionBufferOut) hkpSphereMotion(position, rotation);
        break;
    case hkpMotion::MOTION_BOX_INERTIA:
        motion = new (motionBufferOut) hkpBoxMotion(position, rotation);
        break;
    case hkpMotion::MOTION_THIN_BOX_INERTIA:
        motion = new (motionBufferOut) hkpThinBoxMotion(position, rotation);
        break;
    case hkpMotion::MOTION_DYNAMIC: {
        hkReal maxDiag = hkMath::max2(inertiaLocal(0, 0), hkMath::max2(inertiaLocal(1, 1), inertiaLocal(2, 2)));
        hkReal minDiag = hkMath::min2(inertiaLocal(0, 0), hkMath::min2(inertiaLocal(1, 1), inertiaLocal(2, 2)));
        if (minDiag > maxDiag * 0.8f) {
            motion = new (motionBufferOut) hkpSphereMotion(position, rotation);
        } else {
            motion = new (motionBufferOut) hkpBoxMotion(position, rotation);
        }
        break;
    }
    case hkpMotion::MOTION_KEYFRAMED:
        maxLinearVelocity = 1000000.0f;
        maxAngularVelocity = 1000000.0f;
        motion = new (motionBufferOut) hkpKeyframedRigidMotion(position, rotation);
        break;
    case hkpMotion::MOTION_CHARACTER:
        motion = new (motionBufferOut) hkpCharacterMotion(position, rotation);
        break;
    case hkpMotion::MOTION_FIXED:
        motion = new (motionBufferOut) hkpFixedRigidMotion(position, rotation);
        break;
    default:
        motion = new (motionBufferOut) hkpFixedRigidMotion(position, rotation);
        break;
    }

    if (motionType != hkpMotion::MOTION_KEYFRAMED) {
        motion->setInertiaLocal(inertiaLocal);
        motion->setCenterOfMassInLocal(centreOfMass);
        motion->setMass(mass);
    }
    motion->getMotionState()->m_maxLinearVelocity = maxLinearVelocity;
    motion->getMotionState()->m_maxAngularVelocity = maxAngularVelocity;
}
