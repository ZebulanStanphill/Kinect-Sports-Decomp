// Havok shape getAabb(localToWorld, tolerance, out): transforms every vertex (array at +0x18,
// count at +0x1c) into world space, accumulates min/max starting from +-HK_REAL_MAX, then widens
// the box by the shape's radius (+0x10) plus the tolerance.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { q = v.q; }
    __forceinline void setAll(float x) { q.vector4_f32[0] = x; q = __vspltw(q, 0); }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { q = __vaddfp(a.q, b.q); }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b) { q = __vminfp(a.q, b.q); }
    __forceinline void sub4(const hkVector4 &a) { q = __vsubfp(q, a.q); }
    __forceinline void add4(const hkVector4 &a) { q = __vaddfp(q, a.q); }
    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b) { q = __vmaxfp(a.q, b.q); }
    __vector4 q;
};

class hkTransform {
public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 m_translation;
};

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

static __forceinline void SetTransformedPos(hkVector4 &out, const hkTransform &t, const hkVector4 &v)
{
    __vector4 x = __vspltw(v.q, 0);
    __vector4 y = __vspltw(v.q, 1);
    __vector4 z = __vspltw(v.q, 2);
    __vector4 r = __vmulfp(t.m_col0.q, x);
    r = __vmaddfp(t.m_col1.q, y, r);
    r = __vmaddfp(t.m_col2.q, z, r);
    out.q = __vaddfp(r, t.m_translation.q);
}

struct Shape_82D6F828 {
    char pad00[0x10];
    float m_radius;            // 0x10
    char pad14[4];
    hkVector4 *m_vertices;     // 0x18
    int m_numVertices;         // 0x1c
};

extern "C" void fn_82D6F828(const Shape_82D6F828 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    out.m_min.setAll(3.40282e+38f);
    out.m_max.setAll(-3.40282e+38f);
    for (int i = 0; i < self->m_numVertices; i++) {
        hkVector4 v;
        SetTransformedPos(v, localToWorld, self->m_vertices[i]);
        out.m_min.setMin4(out.m_min, v);
        out.m_max.setMax4(out.m_max, v);
    }
    hkVector4 tol;
    tol.setAll(self->m_radius + tolerance);
    out.m_min.sub4(tol);
    out.m_max.add4(tol);
}
