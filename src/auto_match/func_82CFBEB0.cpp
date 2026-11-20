#include "havok/hkString.h"

extern "C" const char *strrchr(const char *, int);

const char *hkString::strRchr(const char *str, int ch)
{
    return strrchr(str, ch);
}
