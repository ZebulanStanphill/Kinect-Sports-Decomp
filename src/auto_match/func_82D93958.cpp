#include "havok/hkVector4.h"

struct hkRotation_82D93958 {
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 &getColumn(int i) { return (&m_col0)[i]; }
};

struct hkTransform_82D93958 {
    hkRotation_82D93958 m_rotation;
    hkVector4 m_translation;
};

struct ConstraintData_82D93958 {
    char pad00[0x20];
    hkTransform_82D93958 m_transformA;   // 0x20
    hkTransform_82D93958 m_transformB;   // 0x60
};

extern "C" void fn_82D93958(ConstraintData_82D93958 *self, const hkVector4 &pivotA,
                            const hkVector4 &pivotB, const hkVector4 &axisA, const hkVector4 &axisB,
                            const hkVector4 &axisAPerp, const hkVector4 &axisBPerp)
{
    hkTransform_82D93958 &tA = self->m_transformA;
    hkRotation_82D93958 &rA = tA.m_rotation;
    rA.getColumn(0) = axisA;
    rA.getColumn(0).normalize3();
    rA.getColumn(1) = axisAPerp;
    rA.getColumn(1).normalize3();
    rA.getColumn(2).setCross(rA.getColumn(0), rA.getColumn(1));
    tA.m_translation = pivotA;
    hkTransform_82D93958 &tB = self->m_transformB;
    hkRotation_82D93958 &rB = tB.m_rotation;
    rB.getColumn(0) = axisB;
    rB.getColumn(0).normalize3();
    rB.getColumn(1) = axisBPerp;
    rB.getColumn(1).normalize3();
    rB.getColumn(2).setCross(rB.getColumn(0), rB.getColumn(1));
    tB.m_translation = pivotB;
}
