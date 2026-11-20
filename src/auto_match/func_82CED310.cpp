#include "havok/hkString.h"

extern "C" unsigned int fn_82CED310(unsigned int *p)
{
    const char *s = (const char *)(*p & ~1u);
    if (s != 0)
        return hkString::strLen(s);
    return 0;
}
