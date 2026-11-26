#include "havok/hkMotionState.h"

extern "C" void fn_83081658(const hkTransform &transform, hkMotionState &ms)
{
    hkSweptTransform &sweptTransform = ms.getSweptTransform();
    ms.m_deltaAngle.setZero4();

    hkQuaternion rotation;
    rotation.set(transform.getRotation());
    ms.getTransform() = transform;

    sweptTransform.m_rotation0 = rotation;
    sweptTransform.m_rotation1 = rotation;

    hkVector4 centerOfMass;
    centerOfMass._setTransformedPos(transform, sweptTransform.m_centerOfMassLocal);

    float baseTime = sweptTransform.m_centerOfMass0(3);

    sweptTransform.m_centerOfMass0 = centerOfMass;
    sweptTransform.m_centerOfMass1 = centerOfMass;

    sweptTransform.m_centerOfMass0(3) = baseTime;
    sweptTransform.m_centerOfMass1(3) = 0.0f;
}
