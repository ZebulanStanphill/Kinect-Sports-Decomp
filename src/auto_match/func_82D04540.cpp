#include "havok/hkString.h"

extern "C" bool fn_82D04540(const char *const *self, const char *rhs)
{
    return hkString::strCmp(*self, rhs) == 0;
}
