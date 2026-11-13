// Havok: constraint data setInBodySpace(pivotA, pivotB, axisA, axisB, axisAPerp, axisBPerp):
// per constraint frame, the perpendicular and the axis (normalised) become the first two
// rotation columns and their cross the third, then the pivot becomes the translation; the
// rotation of frame B is also copied to the next atom.
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
