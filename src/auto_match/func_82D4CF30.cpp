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
extern "C" __vector4 __vmsum3fp(__vector4,__vector4);
extern "C" void __stvewx(__vector4,void *,int);
class hkpPlaneShape: public hkpShape { public:
 hkVector4 plane,center,extents;
 HK_FORCE_INLINE hkpPlaneShape(const hkVector4 &n,const hkVector4 &c,const hkVector4 &h):hkpShape((hkpShapeType)29) {
 plane=n; float dot; __stvewx(__vmsum3fp(n.q,c.q),&dot,0); plane.q.f[3]=-dot; center=c; extents=h;
 }
};
extern "C" hkpPlaneShape *fn_82D4CF30(hkpPlaneShape *self,const hkVector4 &n,const hkVector4 &c,const hkVector4 &h) { self->hkpPlaneShape::hkpPlaneShape(n,c,h); return self; }
