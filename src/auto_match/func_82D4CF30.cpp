#include "havok/hkpPlaneShape.h"
// The header declares the constructor; it is defined here, HK_FORCE_INLINE.
HK_FORCE_INLINE hkpPlaneShape::hkpPlaneShape(const hkVector4 &n, const hkVector4 &c, const hkVector4 &h)
    : hkpHeightFieldShape(HK_SHAPE_PLANE)
{
    m_plane = n;
    float dot;
    __stvewx(__vmsum3fp(n.m_quad, c.m_quad), &dot, 0);
    m_plane.m_quad.vector4_f32[3] = -dot;
    m_aabbCenter = c;
    m_aabbHalfExtents = h;
}

extern "C" hkpPlaneShape *fn_82D4CF30(hkpPlaneShape *self,const hkVector4 &n,const hkVector4 &c,const hkVector4 &h) { self->hkpPlaneShape::hkpPlaneShape(n,c,h); return self; }
