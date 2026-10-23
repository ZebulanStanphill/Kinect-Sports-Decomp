#include "havok/hkBase.h"
class hkpEntity;
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
class hkpEntity {
public:
    char pad[0x98];
    hkpBreakOffPartsUtil::LimitContactImpulseUtil *m_util;
};
extern "C" void fn_82CE5458(unsigned char *, const float *);
extern "C" void fn_82DEB018(hkpBreakOffPartsUtil *self, hkpEntity *entity, float impulse)
{
    hkpBreakOffPartsUtil::LimitContactImpulseUtil *util = entity->m_util;
    if (!util) util = new hkpBreakOffPartsUtil::LimitContactImpulseUtil(self, entity);
    float value = impulse;
    unsigned char encoded;
    fn_82CE5458(&encoded, &value);
    int limit=encoded;
    if (limit < 1) limit=1;
    util->m_limit = limit;
}
