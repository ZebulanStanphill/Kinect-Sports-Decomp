// Havok sphere-sphere style contact: the two centres (+0x30 of each body), the unit direction from
// the second to the first (lbl_8323B1D0 when they coincide) and the separation (radius at +0x04
// minus the distance) are passed to fn_830A6458 together with the pass-through arguments.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setMul4(float s, const hkVector4 &a)
    {
        m_quad = __vmulfp(a.m_quad, __vspltw(__lvlx(&s, 0), 0));
    }
    __forceinline float length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        float r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

extern "C" const hkVector4 lbl_8323B1D0[4];   // Havok vector table (0x40 bytes), [0] used

struct Body_8309F010 {
    char pad00[0x30];
    hkVector4 m_center;     // 0x30
};

struct Contact_8309F010 {
    hkVector4 m_a;          // 0x00
    hkVector4 m_b;          // 0x10
    hkVector4 m_normal;     // 0x20
};

struct Self_8309F010 {
    char pad00[4];
    float m_radius;         // 0x04
};

extern "C" void fn_830A6458(const Contact_8309F010 *contact, void *a, void *b, float distance);

extern "C" void fn_8309F010(const Self_8309F010 *self, void *a, const Body_8309F010 *bodyA, const Body_8309F010 *bodyB, void *b)
{
    Contact_8309F010 contact;
    hkVector4 d;
    float len;

    contact.m_a = bodyA->m_center;
    contact.m_b = bodyB->m_center;
    d.setSub4(contact.m_a, contact.m_b);
    len = d.length3();
    if (len <= 1.192092896e-07f) {
        contact.m_normal = lbl_8323B1D0[0];
        len = 0.0f;
    } else {
        contact.m_normal.setMul4(1.0f / len, d);
    }
    fn_830A6458(&contact, a, b, self->m_radius - len);
}
