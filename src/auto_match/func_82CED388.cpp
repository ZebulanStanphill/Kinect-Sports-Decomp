#include "havok/hkString.h"

extern "C" char *fn_82CE52E0(void *heap, int size);
extern "C" void **fn_82CE5410(...);

extern "C" char *fn_82CED388(const char *src, int maxLen)
{
    int len = hkString::strLen(src);
    if (len > maxLen) {
        len = maxLen;
    }
    char *dst = fn_82CE52E0(fn_82CE5410()[4], len + 1);
    hkString::strNcpy(dst, src, len);
    dst[len] = 0;
    return dst;
}
