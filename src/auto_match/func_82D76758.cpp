// Havok triangle set-up: edges e0 = v0 - v1, e1 = v2 - v1; out[0..2] = (e0.e0, e1.e1, e0.e1) / det of the
// edge Gram matrix, out[3] = 1 / |e0 x e1|.
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
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
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
    __forceinline float dot3(const hkVector4 &a) const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, a.m_quad), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

extern "C" void fn_82D76758(const hkVector4 *vertices, float *out)
{
    hkVector4 e0, e1, n;

    e0.setSub4(vertices[0], vertices[1]);
    e1.setSub4(vertices[2], vertices[1]);
    float d00 = e0.dot3(e0);
    float d11 = e1.dot3(e1);
    float d01 = e1.dot3(e0);
    n.setCross(e0, e1);
    float inv = 1.0f / (d11 * d00 - d01 * d01);
    out[0] = d00 * inv;
    out[1] = d11 * inv;
    out[2] = d01 * inv;
    out[3] = 1.0f / n.length3();
}
