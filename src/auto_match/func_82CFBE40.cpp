#include "havok/hkString.h"

extern "C" unsigned int strlen(const char *);

int hkString::strLen(const char *str)
{
    return strlen(str);
}
