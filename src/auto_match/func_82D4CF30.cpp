#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
class hkpPlaneShape: public hkpShape { public:
 hkVector4 plane,center,extents;
 HK_FORCE_INLINE hkpPlaneShape(const hkVector4 &n,const hkVector4 &c,const hkVector4 &h):hkpShape((hkpShapeType)29) {
 plane=n; float dot; __stvewx(__vmsum3fp(n.m_quad,c.m_quad),&dot,0); plane.m_quad.vector4_f32[3]=-dot; center=c; extents=h;
 }
};
extern "C" hkpPlaneShape *fn_82D4CF30(hkpPlaneShape *self,const hkVector4 &n,const hkVector4 &c,const hkVector4 &h) { self->hkpPlaneShape::hkpPlaneShape(n,c,h); return self; }
