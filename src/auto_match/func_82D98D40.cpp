// Havok: constraint data setInBodySpace(pivotA, pivotB, axisB) with the constrained axis index
// stored at 0xa2: frame A gets the identity rotation, frame B the axis as column [axis], a
// normalised perpendicular (hkVector4Util::calculatePerpendicularVector) as column
// [(axis + 1) % 3] and their cross as column [(axis + 2) % 3].
#include <math.h>
#include "havok/hkVector4.h"

class hkRotation_82D98D40 {
public:
    __forceinline hkVector4 &getColumn(int i) { return (&m_col0)[i]; }
    __forceinline void setIdentity()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
        m_col0(0) = 1.0f;
        m_col1(1) = 1.0f;
        m_col2(2) = 1.0f;
    }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

struct hkTransform_82D98D40 {
    hkRotation_82D98D40 m_rotation;
    hkVector4 m_translation;
};

struct ConstraintData_82D98D40 {
    char pad00[0x20];
    hkTransform_82D98D40 m_transformA;   // 0x20
    hkTransform_82D98D40 m_transformB;   // 0x60
    char padA0[2];
    unsigned char m_axisIndex;           // 0xa2
};

static __forceinline void calculatePerpendicularVector(const hkVector4 &vectorIn, hkVector4 &biVectorOut)
{
    int min = 0;
    int ok1 = 1;
    int ok2 = 2;

    float a0 = fabs(vectorIn(0));
    float a1 = fabs(vectorIn(1));
    float a2 = fabs(vectorIn(2));

    if (a1 < a0) {
        ok1 = 0;
        min = 1;
        a0 = a1;
    }
    if (a2 < a0) {
        ok2 = min;
        min = 2;
    }
    biVectorOut.setZero4();
    biVectorOut(ok1) = vectorIn(ok2);
    biVectorOut(ok2) = -vectorIn(ok1);
}

extern "C" void fn_82D98D40(ConstraintData_82D98D40 *self, const hkVector4 &pivotA,
                            const hkVector4 &pivotB, const hkVector4 &axisB)
{
    self->m_transformA.m_translation = pivotA;
    self->m_transformB.m_translation = pivotB;
    self->m_transformA.m_rotation.setIdentity();

    hkRotation_82D98D40 &rotB = self->m_transformB.m_rotation;
    int axis = self->m_axisIndex;
    hkVector4 &col = rotB.getColumn(axis);
    col = axisB;
    hkVector4 &perp = rotB.getColumn((axis + 1) % 3);
    calculatePerpendicularVector(col, perp);
    perp.normalize3();
    rotB.getColumn((axis + 2) % 3).setCross(col, rotB.getColumn((axis + 1) % 3));
}
