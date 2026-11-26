#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
class hkpBreakOffPartsUtil {
public:
 class LimitContactImpulseUtil : public hkReferencedObject {
 public:
  LimitContactImpulseUtil(hkpBreakOffPartsUtil *, hkpEntity *);
  char pad[0x10];
  float impulse;
  hkArrayBase<unsigned char> values;
  char tail[8];
 };
};
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
 fn_82CEA160(&p->values, &hkMemoryRouter::getInstance().heap(), key, byteValue);
}
