#include "havok/hkBase.h"
class hkpEntity;
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
class hkpEntity { public: char pad[0x98]; hkpBreakOffPartsUtil::LimitContactImpulseUtil *util; };
extern "C" void fn_82CE5458(unsigned char *, const float *);
extern "C" void fn_82CEA160(void *, hkMemoryAllocator *, unsigned int, unsigned int);
template <class T> static HK_FORCE_INLINE T max2(T a,T b) { return a>b?a:b; }
extern "C" void fn_82DEAF60(hkpBreakOffPartsUtil *self, hkpEntity *entity, unsigned int key, float impulse) {
 hkpBreakOffPartsUtil::LimitContactImpulseUtil *p = entity->util;
 if (!p) p = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
 unsigned char value;
 float valueFloat = impulse;
 fn_82CE5458(&value, &valueFloat);
 value = (unsigned char)max2(1,(int)value);
 unsigned char byteValue=value;
 fn_82CEA160(&p->values, &hkMemoryRouter::getInstance().heap(), key, byteValue);
}
