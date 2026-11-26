#include "havok/hkBase.h"
#include "havok/hkpEntity.h"

class hkpBreakOffPartsUtil : public hkReferencedObject {
public:
    class LimitContactImpulseUtil : public hkReferencedObject {
    public:
        LimitContactImpulseUtil(hkpBreakOffPartsUtil *, hkpEntity *);
        char pad[0xC];
        unsigned char m_limit;
        char tail[0x1B];
    };
};
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
    util->m_limit = limit;
}
