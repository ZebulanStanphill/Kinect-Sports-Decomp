#include "havok/hkString.h"

extern "C" bool fn_82E12EB0(const char *lhs, const char *rhs)
{
    return hkString::strCmp(lhs, rhs) == 0;
}
