// Havok: triangle plane from three vertex pointers: normal = normalize(cross(a - b, b - c)),
// distance = normal.dot3(a).
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
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
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
    __forceinline float dot3(const hkVector4 &a) const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, a.m_quad), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

struct VertexRef_82DE2B20 {
    const hkVector4 *m_vertex;
    int pad[3];
};

struct Triangle_82DE2B20 {
    hkVector4 m_normal;                  // 0x00
    VertexRef_82DE2B20 m_vertices[3];    // 0x10
    float m_distance;                    // 0x40
};

extern "C" void fn_82DE2B20(Triangle_82DE2B20 *self)
{
    const hkVector4 &a = *self->m_vertices[0].m_vertex;
    const hkVector4 &b = *self->m_vertices[1].m_vertex;
    const hkVector4 &c = *self->m_vertices[2].m_vertex;
    hkVector4 e1, e2;

    e1.setSub4(a, b);
    e2.setSub4(b, c);
    self->m_normal.setCross(e1, e2);
    self->m_normal.normalize3();
    self->m_distance = self->m_normal.dot3(a);
}
