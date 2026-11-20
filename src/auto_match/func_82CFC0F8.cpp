#include "havok/hkString.h"

extern "C" unsigned int strlen(const char *);

hkBool hkString::endsWith(const char *str, const char *suffix)
{
    int len = strlen(str);
    int suffixLen = strlen(suffix);
    if (len < suffixLen) {
        return false;
    }
    int offset = len - suffixLen;
    for (int i = 0; i < suffixLen; i++) {
        if (str[offset + i] != suffix[i]) {
            return false;
        }
    }
    return true;
}
