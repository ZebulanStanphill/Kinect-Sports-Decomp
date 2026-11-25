#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
class hkpBoxShape: public hkpConvexShape { public:
 hkVector4 halfExtents;
 HK_FORCE_INLINE hkpBoxShape(const hkVector4 &v,float radius):hkpConvexShape(HK_SHAPE_BOX,radius) {
 halfExtents=v; float x=halfExtents.m_quad.vector4_f32[0],y=halfExtents.m_quad.vector4_f32[1]; float z;
 if(x<y) z=x; else z=y;
 halfExtents.m_quad.vector4_f32[3]=z;
 if(halfExtents.m_quad.vector4_f32[2]<z) halfExtents.m_quad.vector4_f32[3]=halfExtents.m_quad.vector4_f32[2]; else halfExtents.m_quad.vector4_f32[3]=z;
 }
};
extern "C" hkpBoxShape *fn_82D3CD40(hkpBoxShape *self,const hkVector4 &v,float r) { self->hkpBoxShape::hkpBoxShape(v,r); return self; }
