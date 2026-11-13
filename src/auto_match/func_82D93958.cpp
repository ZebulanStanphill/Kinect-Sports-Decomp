// Havok: constraint data setInBodySpace(pivotA, pivotB, axisA, axisB, axisAPerp, axisBPerp):
// per constraint frame, the axis and its perpendicular (normalised) become the first two
// rotation columns and their cross the third, then the pivot becomes the translation.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
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
