// Havok: constraint data setInBodySpace(pivotA, pivotB, axisB) with the constrained axis index
// stored at 0xa2: frame A gets the identity rotation, frame B the axis as column [axis], a
// normalised perpendicular (hkVector4Util::calculatePerpendicularVector) as column
// [(axis + 1) % 3] and their cross as column [(axis + 2) % 3].
#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vxor(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline void normalize3()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    hkQuadReal m_quad;
};

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
