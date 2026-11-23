#include "havok/hkString.h"

static __forceinline char lowercaseAscii(char c)
{
    return (c >= 'A' && c <= 'Z') ? (char)(c + ('a' - 'A')) : c;
}

int hkString::strCasecmp(const char *lhs, const char *rhs)
{
    int i = 0;
    while (lhs[i] != 0 || rhs[i] != 0) {
        if (lowercaseAscii(lhs[i]) < lowercaseAscii(rhs[i])) {
            return -1;
        }
        if (lowercaseAscii(lhs[i]) > lowercaseAscii(rhs[i])) {
            return 1;
        }
        ++i;
    }
    return 0;
}
