#include "havok/hkString.h"

#include <string.h>

int hkString::memCmp(const void *lhs, const void *rhs, int n)
{
    return memcmp(lhs, rhs, n);
}
