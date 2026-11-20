#include "havok/hkString.h"

extern "C" void *memmove(void *, const void *, unsigned int);

void hkString::memMove(void *dst, const void *src, int n)
{
    memmove(dst, src, n);
}
