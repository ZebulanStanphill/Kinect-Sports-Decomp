#include "havok/hkTransform.h"

class hkQuaternion {
public:
    __forceinline void operator=(const hkQuaternion &q) { m_vec = q.m_vec; }
    hkVector4 m_vec;
};

class hkSweptTransform {
public:
    hkVector4 m_centerOfMass0;      // 0x00 (w = base time)
    hkVector4 m_centerOfMass1;      // 0x10
    hkQuaternion m_rotation0;       // 0x20
    hkQuaternion m_rotation1;       // 0x30
    hkVector4 m_centerOfMassLocal;  // 0x40
};

class hkMotionState {
public:
    __forceinline hkTransform &getTransform() { return m_transform; }
    __forceinline hkSweptTransform &getSweptTransform() { return m_sweptTransform; }
    hkTransform m_transform;            // 0x00
    hkSweptTransform m_sweptTransform;  // 0x40
    hkVector4 m_deltaAngle;             // 0x90
};

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
