#include "havok/hkString.h"

extern "C" double fn_82F6B2A0(const char *, char **);

hkReal hkString::atof(const char *str)
{
    return static_cast<hkReal>(fn_82F6B2A0(str, 0));
}
