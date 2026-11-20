#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" unsigned int strlen(const char *);

// hkString::strCpy is defined in the same file (hkString.cpp) and inlined here.
static __forceinline void copyString(char *dst, const char *src)
{
    const int offset = dst - src;
    char c;
    do {
        c = *src;
        const_cast<char *>(src)[offset] = c;
        ++src;
    } while (c != 0);
}

char *hkString::strDup(const char *src, hkMemoryAllocator &alloc)
{
    int len = strlen(src);
    char *r = static_cast<char *>(hkMemoryRouter::easyAlloc(alloc, len + 1));
    copyString(r, src);
    return r;
}
