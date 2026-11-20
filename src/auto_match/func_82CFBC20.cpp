#include "havok/hkString.h"

extern "C" int strncmp(const char *, const char *, unsigned int);

int hkString::strNcmp(const char *lhs, const char *rhs, int n)
{
    return strncmp(lhs, rhs, n);
}
