#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vmulfp(__vector4, __vector4);
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE void setZero() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float x) { q.f[0]=x; q=__vspltw(q,0); }
 __vector4 q;
};
struct hkAabb { hkVector4 min,max; };
class hkpPlaneShape: public hkpShape { public:
 hkVector4 plane,center,extents;
 HK_FORCE_INLINE hkpPlaneShape(const hkVector4 &p,const hkAabb &b):hkpShape((hkpShapeType)29) {
 plane=p;
 center.q=__vmulfp(*(const __vector4 *)"?",__vaddfp(b.min.q,b.max.q));
 extents.q=__vmulfp(*(const __vector4 *)"?",__vsubfp(b.max.q,b.min.q));
 }
};
extern "C" hkpPlaneShape *fn_82D4CEB8(hkpPlaneShape *self,const hkVector4 &p,const hkAabb &b) { self->hkpPlaneShape::hkpPlaneShape(p,b); return self; }
