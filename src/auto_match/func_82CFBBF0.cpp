#include "havok/hkString.h"

extern "C" int strcmp(const char *, const char *);

int hkString::strCmp(const char *lhs, const char *rhs)
{
    return strcmp(lhs, rhs);
}
