#include "havok/hkString.h"

hkBool hkString::beginsWith(const char *str, const char *prefix)
{
    for (int i = 0; prefix[i] != 0; i++) {
        if (str[i] != prefix[i]) {
            return false;
        }
    }
    return true;
}
