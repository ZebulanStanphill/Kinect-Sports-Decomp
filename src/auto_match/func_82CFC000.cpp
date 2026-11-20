#include "havok/hkString.h"

static __forceinline char convert(char c)
{
    if (c < 'a' || c > 'z') {
        return c;
    }
    return (char)(c - 32);
}

char *hkString::strUpr(char *s)
{
    if (*s) {
        char *p = s;
        do {
            *p = convert(*p);
            ++p;
        } while (*p);
    }
    return s;
}
