// hkTransform::setInverse(const hkTransform &t) (Havok 2010, Common/Base/Math/Matrix/hkTransform.cpp):
// the rotation is transposed (fn_82CEBDC0, hkRotation::setTranspose) and the negated translation rotated by it.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vxor(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
}

extern "C" const hkQuadReal lbl_8209AB20;               // sign mask

class hkRotation;
class hkVector4 {
public:
    __forceinline void setNeg4(const hkVector4 &v) { m_quad = __vxor(v.m_quad, lbl_8209AB20); }
    __forceinline void setRotatedDir(const hkRotation &r, const hkVector4 &b);
    hkQuadReal m_quad;
};

class hkRotation {
public:
    __forceinline const hkVector4 &getColumn(int i) const { return m_col[i]; }
    hkVector4 m_col[3];
};

__forceinline void hkVector4::setRotatedDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

extern "C" void fn_82CEBDC0(hkRotation *self, const hkRotation &r);   // hkRotation::setTranspose

class hkTransform {
public:
    hkRotation m_rotation;
    hkVector4 m_translation;
};

extern "C" void fn_82CE66E8(hkTransform *self, const hkTransform &t)
{
    fn_82CEBDC0(&self->m_rotation, t.m_rotation);
    hkVector4 tr;
    tr.setNeg4(t.m_translation);
    self->m_translation.setRotatedDir(self->m_rotation, tr);
}
