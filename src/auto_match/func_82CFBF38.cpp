#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" unsigned int strlen(const char *);
extern "C" char *strncpy(char *dst, const char *src, unsigned int n);

char *hkString::strNdup(const char *src, int maxlen, hkMemoryAllocator &alloc)
{
    int len = strlen(src);
    if (len > maxlen) {
        len = maxlen;
    }
    char *r = static_cast<char *>(hkMemoryRouter::easyAlloc(alloc, len + 1));
    if (len != 0) {
        strncpy(r, src, len);
    }
    r[len] = 0;
    return r;
}
