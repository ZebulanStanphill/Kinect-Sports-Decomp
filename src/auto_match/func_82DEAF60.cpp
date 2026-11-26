// hkpBreakOffPartsUtil::markPieceBreakable(hkpEntity *, hkpShapeKey, hkReal) (the name follows Havok's header):
// creates the entity's LimitContactImpulseUtil if it has none and records the piece's maximum impulse (at least
// 1 as an hkUFloat8) in its shape key map.
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpBreakOffPartsUtil.h"
extern "C" void fn_82CEA160(void *, hkMemoryAllocator *, unsigned int, unsigned int);
template <class T> static HK_FORCE_INLINE T max2(T a,T b) { return a>b?a:b; }
extern "C" void fn_82DEAF60(hkpBreakOffPartsUtil *self, hkpEntity *entity, unsigned int key, float impulse) {
 hkpBreakOffPartsUtil::LimitContactImpulseUtil *p =
  static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(entity->m_limitContactImpulseUtilAndFlag);
 if (!p) p = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
 hkUFloat8 value;
 float valueFloat = impulse;
 value = valueFloat;
 value.m_value = (unsigned char)max2(1,(int)value.m_value);
 unsigned char byteValue=value.m_value;
 fn_82CEA160(&p->m_shapeKeyToMaxImpulse, &hkMemoryRouter::getInstance().heap(), key, byteValue);
}
