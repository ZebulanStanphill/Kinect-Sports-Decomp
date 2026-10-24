#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vspltw(__vector4, unsigned);
class hkVector4 { public:
 HK_FORCE_INLINE hkVector4() {}
 HK_FORCE_INLINE hkVector4(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE hkVector4 &operator=(const hkVector4 &v) { q=v.q; return *this; }
 HK_FORCE_INLINE void setZero4() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float x) { q.f[0]=x; q=__vspltw(q,0); }
 __vector4 q;
};

class hkpMultiSphereShape : public hkpShape { public:
 HK_FORCE_INLINE hkpMultiSphereShape(const hkVector4 *spheres, int count) : hkpShape((hkpShapeType)22) {
  for(int i=0;i<count;++i) m_spheres[i]=spheres[i];
  m_numSpheres=count;
 }
 int m_numSpheres;
 hkVector4 m_spheres[8];
};
extern "C" hkpMultiSphereShape *fn_82D4C700(hkpMultiSphereShape *self, const hkVector4 *spheres, int count) { self->hkpMultiSphereShape::hkpMultiSphereShape(spheres,count); return self; }
