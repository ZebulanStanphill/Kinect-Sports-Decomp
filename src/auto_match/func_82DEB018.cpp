// hkpBreakOffPartsUtil::markEntityBreakable(hkpEntity *, hkReal) (the name follows Havok's header): creates the
// entity's LimitContactImpulseUtil if it has none and sets its maximum impulse (at least 1 as an hkUFloat8).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpBreakOffPartsUtil.h"

extern "C" void fn_82DEB018(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse)
{
    hkpBreakOffPartsUtil::LimitContactImpulseUtil *util =
        static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(entity->m_limitContactImpulseUtilAndFlag);
    if (!util) util = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
    float value = impulse;
    hkUFloat8 encoded;
    encoded = value;
    int limit=encoded.m_value;
    if (limit < 1) limit=1;
    util->m_maxImpulse.m_value = limit;
}
