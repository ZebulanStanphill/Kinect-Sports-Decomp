#include "havok/hkClassMember.h"

typedef struct Self_82CEB8F0 { hkClassMember::Type type; int pad[3]; char data[0x40]; } Self_82CEB8F0;

extern "C" void fn_82CFC050(void *dst, const void *src, int size);

extern "C" int fn_82CEB8F0(Self_82CEB8F0 *self, const void *src, hkClassMember::Type type)
{
    const hkClassMember::TypeProperties &props = hkClassMember::getClassMemberTypeProperties(type);
    if ((unsigned short)props.m_size <= 0x40) {
        self->type = type;
        fn_82CFC050(self->data, src, props.m_size);
        return 0;
    }
    return 1;
}
