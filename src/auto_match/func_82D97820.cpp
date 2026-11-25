#include "havok/hkVector4.h"

struct hkRotation_82D97820 {
    __forceinline void operator=(const hkRotation_82D97820 &r) { m_col0 = r.m_col0; m_col1 = r.m_col1; m_col2 = r.m_col2; }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

struct hkTransform_82D97820 {
    hkRotation_82D97820 m_rotation;
    hkVector4 m_translation;
};

struct ConstraintData_82D97820 {
    char pad00[0x20];
    hkTransform_82D97820 m_transformA;   // 0x20
    hkTransform_82D97820 m_transformB;   // 0x60
    char padA0[0x10];
    hkRotation_82D97820 m_rotationB;     // 0xb0
};

extern "C" void fn_82D97820(ConstraintData_82D97820 *self, const hkVector4 &pivotA,
                            const hkVector4 &pivotB, const hkVector4 &axisA, const hkVector4 &axisB,
                            const hkVector4 &axisAPerp, const hkVector4 &axisBPerp)
{
    hkRotation_82D97820 &rA = self->m_transformA.m_rotation;
    rA.m_col0 = axisAPerp;
    rA.m_col0.normalize3();
    rA.m_col1 = axisA;
    rA.m_col1.normalize3();
    rA.m_col2.setCross(rA.m_col0, rA.m_col1);
    self->m_transformA.m_translation = pivotA;
    hkRotation_82D97820 &rB = self->m_transformB.m_rotation;
    rB.m_col0 = axisBPerp;
    rB.m_col0.normalize3();
    rB.m_col1 = axisB;
    rB.m_col1.normalize3();
    rB.m_col2.setCross(rB.m_col0, rB.m_col1);
    self->m_transformB.m_translation = pivotB;
    self->m_rotationB = self->m_transformB.m_rotation;
}
