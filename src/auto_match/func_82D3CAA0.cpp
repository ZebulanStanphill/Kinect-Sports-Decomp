#include "havok/hkpBoxShape.h"
void hkpBoxShape::setHalfExtents(const hkVector4 &halfExtents)
{
 m_halfExtents=halfExtents; float x=m_halfExtents.m_quad.vector4_f32[0],y=m_halfExtents.m_quad.vector4_f32[1]; float z;
 if(x<y) z=x; else z=y;
 m_halfExtents.m_quad.vector4_f32[3]=z;
 if(m_halfExtents.m_quad.vector4_f32[2]<z) m_halfExtents.m_quad.vector4_f32[3]=m_halfExtents.m_quad.vector4_f32[2]; else m_halfExtents.m_quad.vector4_f32[3]=z;
}
