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
extern "C" void fn_82DEB0A8(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse) {
 if (!entity->util) {
  hkpBreakOffPartsUtil::LimitContactImpulseUtil *p = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
  p->impulse = impulse;
 } else entity->util->impulse = impulse;
}
