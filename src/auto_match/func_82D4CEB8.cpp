#include "havok/hkAabb.h"
#include "havok/hkpPlaneShape.h"
// The header declares the constructor; it is defined here, HK_FORCE_INLINE.
HK_FORCE_INLINE hkpPlaneShape::hkpPlaneShape(const hkVector4 &p, const hkAabb &b)
    : hkpHeightFieldShape(HK_SHAPE_PLANE)
{
    m_plane = p;
    m_aabbCenter.m_quad = __vmulfp(lbl_82132D70, __vaddfp(b.m_min.m_quad, b.m_max.m_quad));
    m_aabbHalfExtents.m_quad = __vmulfp(lbl_82132D70, __vsubfp(b.m_max.m_quad, b.m_min.m_quad));
}

extern "C" hkpPlaneShape *fn_82D4CEB8(hkpPlaneShape *self,const hkVector4 &p,const hkAabb &b) { self->hkpPlaneShape::hkpPlaneShape(p,b); return self; }
