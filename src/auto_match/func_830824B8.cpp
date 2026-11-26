// hkMotionState::initMotionState(const hkVector4 &, const hkQuaternion &) (Common/Base/Types/Physics/MotionState/
// hkMotionState.cpp): the swept transform from the position and rotation, the transform from the rotation and
// the position, no delta angle and an object radius of 1. Havok code, /O2 /QVMXReserve.
#include "havok/hkMotionState.h"

// hkSweptTransform::initSweptTransform, out of line.
extern "C" void fn_83082330(hkSweptTransform *self, const hkVector4 &position, const hkQuaternion &rotation);

void hkMotionState::initMotionState(const hkVector4 &position, const hkQuaternion &rotation)
{
    fn_83082330(&m_sweptTransform, position, rotation);
    m_transform.setRotation(rotation);
    m_transform.setTranslation(position);
    m_deltaAngle.setZero4();
    m_objectRadius = 1.0f;
}
