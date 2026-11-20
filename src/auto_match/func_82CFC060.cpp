#include "havok/hkString.h"

extern "C" void *memset(void *, int, unsigned int);

void hkString::memSet(void *dst, int ch, int n)
{
    memset(dst, ch, n);
}
