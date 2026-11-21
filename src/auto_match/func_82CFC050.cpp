// hkString::memCpy (Common/Base/Container/String/hkString.cpp).
#include "havok/hkString.h"

extern "C" void *memcpy(void *, const void *, unsigned int);

void hkString::memCpy(void *dst, const void *src, int n)
{
    memcpy(dst, src, n);
}
