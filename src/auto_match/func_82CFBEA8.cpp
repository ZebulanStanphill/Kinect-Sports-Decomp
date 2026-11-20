#include "havok/hkString.h"

extern "C" const char *strchr(const char *, int);

const char *hkString::strChr(const char *str, int ch)
{
    return strchr(str, ch);
}
