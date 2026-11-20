#include "havok/hkString.h"

extern "C" int fn_82D044F0(const char *const *self, const char *rhs)
{
    return hkString::strCmp(*self, rhs);
}
