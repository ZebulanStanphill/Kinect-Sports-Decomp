// Havok hkMatrix4::isApproximatelyEqual(m, epsilon): every column of this matrix equals the
// matching column of m within epsilon in all four components (hkVector4::equals4, the equals3
// shape of Matching func_82DF2508 with MASK_XYZW). The hkBool result is returned through r3.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

extern const __vector4 lbl_821CA820;     // 0x7fffffff in every word
extern const __vector4 lbl_8323B330[16]; // hkVector4Comparison mask table
}

class hkBool {
public:
    __forceinline hkBool(bool b) { m_bool = (char)b; }
    char m_bool;
};

class hkVector4Comparison {
public:
    enum Mask { MASK_XYZW = 15 };
    __forceinline int allAreSet(Mask m) const
    {
        unsigned int cr;
        __vcmpequwR(__vor(mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
        return cr & 0x80;
    }
    __vector4 mask;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { q = v.q; }
    __forceinline void setAll(float x) { q.vector4_f32[0] = x; q = __vspltw(q, 0); }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    __forceinline void setAbs4(const hkVector4 &a) { q = __vand(a.q, lbl_821CA820); }
    __forceinline hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const
    {
        hkVector4Comparison c;
        c.mask = __vcmpgefp(a.q, q);
        return c;
    }
    __forceinline int equals4(const hkVector4 &v, float epsilon) const
    {
        hkVector4 t;
        hkVector4 e;
        t.setSub4(*this, v);
        t.setAbs4(t);
        e.setAll(epsilon);
        return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZW);
    }
    __vector4 q;
};

class hkMatrix4 {
public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 m_col3;
};

extern "C" hkBool *fn_82D063E8(hkBool *result, const hkMatrix4 *self, const hkMatrix4 &m, float epsilon)
{
    *result = hkBool(self->m_col0.equals4(m.m_col0, epsilon) && self->m_col1.equals4(m.m_col1, epsilon) &&
                     self->m_col2.equals4(m.m_col2, epsilon) && self->m_col3.equals4(m.m_col3, epsilon));
    return result;
}
