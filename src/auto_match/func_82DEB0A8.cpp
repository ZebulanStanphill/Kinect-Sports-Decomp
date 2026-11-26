// hkpBreakOffPartsUtil: creates the entity's LimitContactImpulseUtil if it has none and sets the float at +0x18
// (m_maxImpulseFactor).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpBreakOffPartsUtil.h"
extern "C" void fn_82DEB0A8(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse) {
 hkpBreakOffPartsUtil::LimitContactImpulseUtil *util =
     static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(entity->m_limitContactImpulseUtilAndFlag);
 if (!util) {
  hkpBreakOffPartsUtil::LimitContactImpulseUtil *p = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
  p->m_maxImpulseFactor = impulse;
 } else util->m_maxImpulseFactor = impulse;
}
