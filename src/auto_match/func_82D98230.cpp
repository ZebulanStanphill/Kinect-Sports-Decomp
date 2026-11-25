#include "havok/hkBase.h"
#include "havok/hkVector4.h"
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
