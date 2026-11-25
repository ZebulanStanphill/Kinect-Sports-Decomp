#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
struct hkAabb { hkVector4 min,max; };
class hkpPlaneShape: public hkpShape { public:
 hkVector4 plane,center,extents;
 HK_FORCE_INLINE hkpPlaneShape(const hkVector4 &p,const hkAabb &b):hkpShape((hkpShapeType)29) {
 plane=p;
 center.m_quad=__vmulfp(lbl_82132D70,__vaddfp(b.min.m_quad,b.max.m_quad));
 extents.m_quad=__vmulfp(lbl_82132D70,__vsubfp(b.max.m_quad,b.min.m_quad));
 }
};
extern "C" hkpPlaneShape *fn_82D4CEB8(hkpPlaneShape *self,const hkVector4 &p,const hkAabb &b) { self->hkpPlaneShape::hkpPlaneShape(p,b); return self; }
