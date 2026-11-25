#include "havok/hkTransform.h"

class hkQuaternion {
public:
    __forceinline void operator=(const hkQuaternion &q) { m_vec = q.m_vec; }
    __forceinline void set(const hkRotation &r);
    hkVector4 m_vec;
};

extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

__forceinline void hkQuaternion::set(const hkRotation &r) { fn_82CE5990(this, r); }

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
