// hkQuaternion::setAxisAngle(const hkVector4 &axis, hkReal angle)
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
double fn_82F64318(double x);           // sin
double fn_82F643F8(double x);           // cos
}

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { q = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal q;
};

class hkVector4 {
public:
    __forceinline void setMul4(const hkSimdReal &s, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, s.q); }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

extern "C" void fn_82CE5690(hkQuaternion *self, const hkVector4 &axis, float angle)
{
    float halfAngle = 0.5f * angle;
    float sinHalf = (float)fn_82F64318(halfAngle);
    self->m_vec.setMul4(sinHalf, axis);
    self->m_vec(3) = (float)fn_82F643F8(halfAngle);
}
