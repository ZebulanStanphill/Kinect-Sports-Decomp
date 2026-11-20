#include "havok/hkString.h"

extern "C" const char *strstr(const char *, const char *);

const char *hkString::strStr(const char *str, const char *needle)
{
    return strstr(str, needle);
}
