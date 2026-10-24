#include "havok/hkBase.h"
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

class hkpStiffSpringConstraintData : public hkReferencedObject { public:
 HK_FORCE_INLINE hkpStiffSpringConstraintData() : m_userData(0), m_pivotsType(3), m_springType(6) { m_pivotA.setZero4(); m_pivotB.setZero4(); m_length=0.0f; }
 unsigned m_userData;
 char pad[4];
 unsigned short m_pivotsType;
 hkVector4 m_pivotA;
 hkVector4 m_pivotB;
 unsigned short m_springType;
 float m_length;
};
extern "C" hkpStiffSpringConstraintData *fn_82D98230(hkpStiffSpringConstraintData *self) { self->hkpStiffSpringConstraintData::hkpStiffSpringConstraintData(); return self; }
