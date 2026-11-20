#include "havok/hkString.h"

extern "C" char *strncpy(char *, const char *, unsigned int);

void hkString::strNcpy(char *dst, const char *src, int n)
{
    if (n != 0) {
        strncpy(dst, src, n);
    }
}
