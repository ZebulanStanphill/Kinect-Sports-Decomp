#include "havok/hkString.h"

void hkString::strCpy(char *dst, const char *src)
{
    const int offset = dst - src;
    char c;
    do {
        c = *src;
        const_cast<char *>(src)[offset] = c;
        ++src;
    } while (c != 0);
}
