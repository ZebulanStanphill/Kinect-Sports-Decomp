// Havok: the three vertices of a triangle of a quantised (hkUint16 x, y, z) vertex
// array, decompressed as offset + scale * (x, y, z, 0).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
}

class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal(const float &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal m_real;
};

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void set(hkReal x, hkReal y, hkReal z, hkReal w)
    {
        hkQuadReal t;
        t.vector4_f32[0] = x;
        t.vector4_f32[1] = y;
        t.vector4_f32[2] = z;
        t.vector4_f32[3] = w;
        m_quad = t;
    }
    HK_FORCE_INLINE void setAddMul4(const hkVector4 &a, const hkVector4 &b, const hkSimdReal &r)
    {
        m_quad = __vmaddfp(b.m_quad, r.m_real, a.m_quad);
    }
    hkQuadReal m_quad;
};

struct QuantizedVertices {
    hkVector4 m_offset;             // +0x00
    hkUint16 *m_vertices;           // +0x10
    HK_FORCE_INLINE void getVertex(int i, const hkSimdReal &scale, hkVector4 &v) const
    {
        hkVector4 p;
        p.set(hkReal(m_vertices[i]), hkReal(m_vertices[i + 1]), hkReal(m_vertices[i + 2]), 0.0f);
        v.setAddMul4(m_offset, p, scale);
    }
};

extern "C" void fn_82D45088(const QuantizedVertices *self, int a, int b, int c, hkReal scale, hkVector4 &va,
                            hkVector4 &vb, hkVector4 &vc)
{
    const hkSimdReal s = scale;
    self->getVertex(a, s, va);
    self->getVertex(b, s, vb);
    self->getVertex(c, s, vc);
}
