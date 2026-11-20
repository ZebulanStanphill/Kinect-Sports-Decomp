#include "havok/hkString.h"

extern "C" int fn_82CE5410(void);
extern "C" char *fn_82CE52E0(int heap, int size);

extern "C" char *fn_82CED330(const char *s)
{
    int len = hkString::strLen(s) + 1;
    char *r = fn_82CE52E0(*(int *)(fn_82CE5410() + 0x10), len);
    hkString::strCpy(r, s);
    return r;
}
