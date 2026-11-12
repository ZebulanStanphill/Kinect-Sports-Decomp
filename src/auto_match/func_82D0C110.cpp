// Havok: plane of a face from its three vertices: normal = normalize(cross(b - a, c - a)),
// w = -normal.dot3(a). out is the hidden result pointer of the original member function (this = self).
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
extern const hkQuadReal lbl_82132D00;   // Havok's global zero vector
}

class hkSimdReal {
public:
    __forceinline operator float() const { float r; __stvewx(m_real, &r, 0); return r; }
    __forceinline hkSimdReal operator-() const { hkSimdReal r; r.m_real = __vsubfp(lbl_82132D00, m_real); return r; }
    hkQuadReal m_real;
};

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
    __forceinline hkSimdReal dot3(const hkVector4 &a) const
    {
        hkSimdReal r;
        r.m_real = __vmsum3fp(m_quad, a.m_quad);
        return r;
    }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

struct Vertex_82D0C110 {
    int pad[4];
    hkVector4 m_position;    // 0x10
};

struct Face_82D0C110 {
    int pad[2];
    Vertex_82D0C110 *m_vertices[3];   // 0x08
};

struct Self_82D0C110;

extern "C" void fn_82D0C110(hkVector4 *out, const Self_82D0C110 *self, const Face_82D0C110 *face)
{
    const hkVector4 &a = face->m_vertices[0]->m_position;
    const hkVector4 &b = face->m_vertices[1]->m_position;
    const hkVector4 &c = face->m_vertices[2]->m_position;
    hkVector4 e1, e2;
    hkVector4 plane;

    e1.setSub4(b, a);
    e2.setSub4(c, a);
    plane.setCross(e1, e2);
    plane.normalize3();
    plane(3) = -plane.dot3(a);
    *out = plane;
}
