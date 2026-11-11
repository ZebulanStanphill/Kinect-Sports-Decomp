// Havok hkMatrix3::setMulInverse(const hkMatrix3 &a, const hkRotation &b): this = a * b^T
// (the inverse of a rotation is its transpose). hkMatrix3::_setTranspose and the column
// loop of setMul are inlined.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
}

class hkMatrix3;
class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void _setMul3(const hkMatrix3 &r, const hkVector4 &b);
    hkQuadReal m_quad;
};

class hkMatrix3 {
public:
    __forceinline hkVector4 &getColumn(int i) { return (&m_col0)[i]; }
    __forceinline const hkVector4 &getColumn(int i) const { return (&m_col0)[i]; }
    __forceinline float &operator()(int row, int col) { return getColumn(col).m_quad.vector4_f32[row]; }
    __forceinline const float &operator()(int row, int col) const { return getColumn(col).m_quad.vector4_f32[row]; }
    __forceinline void _setTranspose(const hkMatrix3 &s)
    {
        hkMatrix3 &d = *this;
        d(0, 0) = s(0, 0);
        d(1, 1) = s(1, 1);
        d(2, 2) = s(2, 2);
        d(3, 0) = 0.0f;
        d(3, 1) = 0.0f;
        d(3, 2) = 0.0f;
        d(1, 0) = s(0, 1);
        d(0, 1) = s(1, 0);
        d(2, 0) = s(0, 2);
        d(0, 2) = s(2, 0);
        d(2, 1) = s(1, 2);
        d(1, 2) = s(2, 1);
    }
    __forceinline void setMul(const hkMatrix3 &a, const hkMatrix3 &b)
    {
        hkMatrix3 aa = a;
        for (int i = 2; i >= 0; i--) {
            getColumn(i)._setMul3(aa, b.getColumn(i));
        }
    }
    __forceinline hkMatrix3() {}
    __forceinline hkMatrix3(const hkMatrix3 &m) { m_col0 = m.m_col0; m_col1 = m.m_col1; m_col2 = m.m_col2; }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

__forceinline void hkVector4::_setMul3(const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

extern "C" void fn_82CEC730(hkMatrix3 *self, const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 t;
    t._setTranspose(b);
    self->setMul(a, t);
}
