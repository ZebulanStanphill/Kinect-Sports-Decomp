// Havok constraint setInWorldSpace shape (fn_82DA21D8 plus pivots): builds the constraint frame
// from the normalised axis, the normalised perpendicular and their cross product, stores it in
// each body's local space (transposed body rotation times the frame), the pivot in each body's
// local space (fn_82CE5088 = setTransformedInversePos), and a copy of body B's frame.
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
__vector4 __vmrghw(__vector4, __vector4);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
extern const hkQuadReal lbl_82132D00;   // Havok's global zero vector
}

class hkMatrix3;
class hkTransform;
class hkVector4;
extern "C" void fn_82CE5088(hkVector4 *self, const hkTransform *t, const hkVector4 *v);
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
    __forceinline void _setRotatedInverseDir(const hkMatrix3 &r, const hkVector4 &b);
    __forceinline void setTransformedInversePos(const hkTransform &t, const hkVector4 &v) { fn_82CE5088(this, &t, &v); }
    hkQuadReal m_quad;
};

class hkMatrix3 {
public:
    __forceinline hkVector4 &getColumn(int i) { return (&m_col0)[i]; }
    __forceinline const hkVector4 &getColumn(int i) const { return (&m_col0)[i]; }
    __forceinline void setTransposeMul(const hkMatrix3 &a, const hkMatrix3 &b)
    {
        hkMatrix3 aa = a;
        int i = 2;
        do {
            getColumn(i)._setRotatedInverseDir(aa, b.getColumn(i));
        } while (--i >= 0);
    }
    __forceinline hkMatrix3() {}
    __forceinline hkMatrix3(const hkMatrix3 &m) { m_col0 = m.m_col0; m_col1 = m.m_col1; m_col2 = m.m_col2; }
    __forceinline void operator=(const hkMatrix3 &m) { m_col0 = m.m_col0; m_col1 = m.m_col1; m_col2 = m.m_col2; }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

__forceinline void hkVector4::_setRotatedInverseDir(const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    m_quad = __vmrghw(xz, y0);
}

class hkTransform {
public:
    __forceinline const hkMatrix3 &getRotation() const { return m_rotation; }
    hkMatrix3 m_rotation;
    hkVector4 m_translation;
};

struct Atoms_82D97E58 {
    char pad0[0x20];
    hkTransform m_transformA;     // 0x20
    hkTransform m_transformB;     // 0x60
    char padA0[0x10];
    hkMatrix3 m_rotationB;        // 0xb0
};

extern "C" void fn_82D97E58(Atoms_82D97E58 *self, const hkTransform &bodyATransform,
                            const hkTransform &bodyBTransform, const hkVector4 &pivot,
                            const hkVector4 &axis, const hkVector4 &perp)
{
    hkMatrix3 m;
    m.m_col0 = axis;
    m.m_col0.normalize3();
    m.m_col1 = perp;
    m.m_col1.normalize3();
    m.m_col2.setCross(m.m_col0, m.m_col1);
    self->m_transformA.m_rotation.setTransposeMul(bodyATransform.getRotation(), m);
    self->m_transformB.m_rotation.setTransposeMul(bodyBTransform.getRotation(), m);
    self->m_transformA.m_translation.setTransformedInversePos(bodyATransform, pivot);
    self->m_transformB.m_translation.setTransformedInversePos(bodyBTransform, pivot);
    self->m_rotationB = self->m_transformB.m_rotation;
}
