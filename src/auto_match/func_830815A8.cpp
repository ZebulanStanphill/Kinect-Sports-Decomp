#include "havok/hkMotionState.h"

extern "C" void fn_830815A8(const hkVector4 &position, const hkQuaternion &rotation, hkMotionState &ms)
{
    hkSweptTransform &sweptTransform = ms.getSweptTransform();
    ms.m_deltaAngle.setZero4();

    sweptTransform.m_rotation0 = rotation;
    sweptTransform.m_rotation1 = rotation;

    ms.getTransform().setRotation(rotation);
    ms.getTransform().setTranslation(position);

    hkVector4 centerShift;
    centerShift._setRotatedDir(ms.getTransform().getRotation(), sweptTransform.m_centerOfMassLocal);

    float baseTime = sweptTransform.m_centerOfMass0(3);

    sweptTransform.m_centerOfMass0.setAdd4(position, centerShift);
    sweptTransform.m_centerOfMass1 = sweptTransform.m_centerOfMass0;

    sweptTransform.m_centerOfMass0(3) = baseTime;
    sweptTransform.m_centerOfMass1(3) = 0.0f;
}
