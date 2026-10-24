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
class hkpBoxShape: public hkpConvexShape { public:
 hkVector4 halfExtents;
 HK_FORCE_INLINE hkpBoxShape(const hkVector4 &v,float radius):hkpConvexShape(HK_SHAPE_BOX,radius) {
 halfExtents=v; float x=halfExtents.q.f[0],y=halfExtents.q.f[1]; float z;
 if(x<y) z=x; else z=y;
 halfExtents.q.f[3]=z;
 if(halfExtents.q.f[2]<z) halfExtents.q.f[3]=halfExtents.q.f[2]; else halfExtents.q.f[3]=z;
 }
};
extern "C" hkpBoxShape *fn_82D3CD40(hkpBoxShape *self,const hkVector4 &v,float r) { self->hkpBoxShape::hkpBoxShape(v,r); return self; }
