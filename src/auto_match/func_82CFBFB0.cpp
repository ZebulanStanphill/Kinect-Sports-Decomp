#include "havok/hkString.h"

static __forceinline char convert(char c)
{
    if (c < 'A' || c > 'Z') {
        return c;
    }
    return (char)(c + 32);
}

char *hkString::strLwr(char *s)
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
