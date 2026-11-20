#include "havok/hkString.h"

static __forceinline char toLower(char c)
{
    return (c >= 'A' && c <= 'Z') ? (char)(c + ('a' - 'A')) : c;
}

int hkString::strCasecmp(const char *lhs, const char *rhs)
{
    int i = 0;
    while (lhs[i] != 0 || rhs[i] != 0) {
        if (toLower(lhs[i]) < toLower(rhs[i])) {
            return -1;
        }
        if (toLower(lhs[i]) > toLower(rhs[i])) {
            return 1;
        }
        ++i;
    }
    return 0;
}
