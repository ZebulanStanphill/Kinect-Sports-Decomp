// Havok: the three vertices of a triangle of a quantised (hkUint16 x, y, z) vertex
// array, decompressed as offset + scale * (x, y, z, 0).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

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
