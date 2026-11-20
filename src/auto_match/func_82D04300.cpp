#include "havok/hkString.h"

extern "C" int fn_82D04300(char **str, const char *sub)
{
    const char *p;
    int last;

    last = -1;
    for (p = hkString::strStr(*str, sub); p != 0; p = hkString::strStr(p + 1, sub)) {
        last = p - *str;
    }
    return last;
}
