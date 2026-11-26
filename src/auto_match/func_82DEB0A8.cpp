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
extern "C" void fn_82DEB0A8(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse) {
 hkpBreakOffPartsUtil::LimitContactImpulseUtil *util =
     static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(entity->m_limitContactImpulseUtilAndFlag);
 if (!util) {
  hkpBreakOffPartsUtil::LimitContactImpulseUtil *p = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
  p->impulse = impulse;
 } else util->impulse = impulse;
}
