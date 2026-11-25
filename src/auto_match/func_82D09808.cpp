#include "havok/hkVector4.h"

class hkSphere
{
  public:
    __forceinline hkSphere()
    {
    }

    __forceinline hkSphere(const hkSphere &s)
    {
        m_pos = s.m_pos;
    }

    __forceinline void operator=(const hkSphere &s)
    {
        m_pos = s.m_pos;
    }

    hkVector4 m_pos;
};

class StridedVertices_82D09808
{
  public:
    hkSphere BoundingSphere(hkReal eps) const;
    const hkReal *m_vertices; /* 0x0 */
    int m_numVertices;        /* 0x4 */
    int m_striding;           /* 0x8 */
};

struct Memory_82D09808;

struct Runtime_82D09808 {
    char pad[0x10];
    Memory_82D09808 *memory; /* 0x10 */
};

extern "C" Runtime_82D09808 *fn_82CE5410(void);
extern "C" void *fn_82CE52E0(Memory_82D09808 *memory, int numBytes);
extern "C" void fn_82CE5338(Memory_82D09808 *memory, void *p);
extern "C" hkSphere fn_82D09618(hkVector4 *points, int numPoints, unsigned int numBoundary, hkReal eps);

hkSphere StridedVertices_82D09808::BoundingSphere(hkReal eps) const
{
    hkVector4 *points = (hkVector4 *)fn_82CE52E0(fn_82CE5410()->memory, m_numVertices * 16);
    int stride = m_striding / 4;
    int offset = 0;
    for (int i = 0; i < m_numVertices; i++) {
        points[i](0) = m_vertices[offset + 0];
        points[i](1) = m_vertices[offset + 1];
        points[i](2) = m_vertices[offset + 2];
        offset += stride;
    }
    hkSphere sphere = fn_82D09618(points, m_numVertices, 0, eps);
    fn_82CE5338(fn_82CE5410()->memory, points);
    return sphere;
}
