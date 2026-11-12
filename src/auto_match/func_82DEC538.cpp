// Havok key-frame style state (C++ form).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);
__vector4 __vxor(__vector4 a, __vector4 b);
extern const __vector4 lbl_8209AB20;
}

typedef __vector4 hkQuadReal;
class hkSimdReal {
public:
    __forceinline hkSimdReal() {}
    __forceinline hkSimdReal(const hkQuadReal &x) { q = x; }
    __forceinline hkSimdReal(const float &x) { q = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal q;
};

class hkVector4 {
public:
    __forceinline hkVector4() {}
    __forceinline hkVector4(const hkVector4 &v) { q = v.q; }
    __forceinline hkVector4 &operator=(const hkVector4 &v) { q = v.q; return *this; }
    __forceinline hkSimdReal getSimdAt3() const { return __vspltw(q, 3); }
    __forceinline float operator()(int i) const { return q.vector4_f32[i]; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    __forceinline void mul4(hkSimdReal r) { q = __vmulfp(q, r.q); }
    __forceinline void setMul4(hkSimdReal r, const hkVector4 &a) { q = __vmulfp(a.q, r.q); }
    __forceinline void addMul4(hkSimdReal r, const hkVector4 &a) { q = __vmaddfp(a.q, r.q, q); }
    __forceinline void subMul4(hkSimdReal r, const hkVector4 &a) { q = __vnmsubfp(a.q, r.q, q); }
    __forceinline hkSimdReal dot4(const hkVector4 &a) const { return __vspltw(__vmsum4fp(q, a.q), 0); }
    __forceinline void setXYZW(const hkVector4 &xyz, hkSimdReal w) { q = __vrlimi(xyz.q, w.q, 1, 0); }
    __forceinline void setNeg4(const hkVector4 &a) { q = __vxor(a.q, lbl_8209AB20); }
    __forceinline void setCross(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vsubfp(__vmulfp(__vpermwi(a.q, 99), __vpermwi(b.q, 135)),
                     __vmulfp(__vpermwi(a.q, 135), __vpermwi(b.q, 99)));
    }
    hkQuadReal q;
};

class hkQuaternion {
public:
    __forceinline void setMulInverse(const hkQuaternion &q0, const hkQuaternion &q1)
    {
        hkVector4 h;
        h.setCross(q1.m_vec, q0.m_vec);
        h.subMul4(q0.m_vec.getSimdAt3(), q1.m_vec);
        h.addMul4(q1.m_vec.getSimdAt3(), q0.m_vec);
        m_vec.setXYZW(h, q0.m_vec.dot4(q1.m_vec));
    }
    __forceinline const hkVector4 &getImag() const { return m_vec; }
    __forceinline float getReal() const { return m_vec(3); }
    hkVector4 m_vec;
};

struct KeyFrame_82DEC538 {
    hkVector4 m_position;           /* 0x00 */
    hkQuaternion m_orientation;     /* 0x10 */
    hkVector4 m_linearVelocity;     /* 0x20 */
    hkVector4 m_angularVelocity;    /* 0x30 */
};

extern "C" void fn_82DEC538(KeyFrame_82DEC538 *self, const hkVector4 &position, const hkQuaternion &orientation,
                            const hkVector4 &nextPosition, const hkQuaternion &nextOrientation, float invDeltaTime)
{
    hkQuaternion quatDif;
    hkVector4 d;

    self->m_position = position;
    d.setSub4(nextPosition, position);
    self->m_linearVelocity.setMul4(invDeltaTime, d);
    self->m_orientation = orientation;
    quatDif.setMulInverse(nextOrientation, orientation);
    self->m_angularVelocity.setMul4(2.0f * invDeltaTime, quatDif.getImag());
    if (quatDif.getReal() < 0.0f) {
        self->m_angularVelocity.setNeg4(self->m_angularVelocity);
    }
}
