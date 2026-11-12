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
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline float lengthSquared3() const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, m_quad), &r, 0);
        return r;
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

struct Pivots_82D9E2E8 {
    hkVector4 m_vec[1];          // 0x00, indexed by atom offsets (+5, +8)
};

struct Runtime_82D9E2E8 {
    hkVector4 m_vec[11];         // 0x00
    char pad[0x8];               // 0xb0
    int m_numJacobians;          // 0xb8
};

struct JacInfo_82D9E2E8 {
    hkVector4 m_axis;            // 0x00
    float m_a;                   // 0x10
    float m_b;                   // 0x14
    float m_dot;                 // 0x18
    float m_half;                // 0x1c
};

extern "C" void fn_8309FA20(JacInfo_82D9E2E8 *info, void *a, void *b);

extern "C" void fn_82D9E2E8(void *unused0, int **cursor, float **schema, void *unused1,
                            Runtime_82D9E2E8 *rt, void *out, void *out2)
{
    int idx;
    JacInfo_82D9E2E8 info;
    hkVector4 b, a;
    float *s;

    idx = *++(*cursor);
    info.m_half = 0.5f;
    b = rt->m_vec[idx + 5];
    a = rt->m_vec[idx + 8];
    info.m_axis.setCross(b, a);
    if (info.m_axis.lengthSquared3() < 1.1920929e-07f)
        return;
    info.m_axis.normalize3();
    info.m_dot = a(0) * b(0) + a(1) * b(1) + a(2) * b(2);
    s = *schema;
    *schema = s + 4;
    info.m_a = s[0];
    info.m_b = s[1];
    fn_8309FA20(&info, out, out2);
    rt->m_numJacobians++;
}
