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
extern "C" void fn_82CE5458(unsigned char *, const float *);
extern "C" void fn_82DEB018(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse)
{
    hkpBreakOffPartsUtil::LimitContactImpulseUtil *util =
        static_cast<hkpBreakOffPartsUtil::LimitContactImpulseUtil *>(entity->m_limitContactImpulseUtilAndFlag);
    if (!util) util = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
    float value = impulse;
    unsigned char encoded;
    fn_82CE5458(&encoded, &value);
    int limit=encoded;
    if (limit < 1) limit=1;
    util->m_limit = limit;
}
