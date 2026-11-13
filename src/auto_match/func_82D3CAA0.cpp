#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 __vector4 q;
};
class hkpBoxShape: public hkpConvexShape { public:
 void setHalfExtents(const hkVector4 &halfExtents);
 hkVector4 m_halfExtents;
};
void hkpBoxShape::setHalfExtents(const hkVector4 &halfExtents)
{
 m_halfExtents=halfExtents; float x=m_halfExtents.q.f[0],y=m_halfExtents.q.f[1]; float z;
 if(x<y) z=x; else z=y;
 m_halfExtents.q.f[3]=z;
 if(m_halfExtents.q.f[2]<z) m_halfExtents.q.f[3]=m_halfExtents.q.f[2]; else m_halfExtents.q.f[3]=z;
}
