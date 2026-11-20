#include "havok/hkString.h"

// Compares the string the object's first member points at with name, ignoring case.
extern "C" int fn_82D044F8(const char **self, const char *name)
{
    return hkString::strCasecmp(*self, name);
}
