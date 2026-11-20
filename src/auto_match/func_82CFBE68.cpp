#include "havok/hkString.h"

extern "C" int fn_82F6A3F0(const char *, char **, int);

int hkString::atoi(const char *str, int base)
{
    return fn_82F6A3F0(str, 0, base);
}
