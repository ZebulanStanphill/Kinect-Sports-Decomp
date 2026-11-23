#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" void fn_82CE5430(void *);
extern "C" unsigned int strlen(const char *);
extern "C" char *strncpy(char *, const char *, unsigned int);

char *hkString::strNdup(const char *src, int maxlen)
{
    char scope[48];
    fn_82CE5430(scope);
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    int len = strlen(src);
    if (len > maxlen) {
        len = maxlen;
    }
    char *result = static_cast<char *>(hkMemoryRouter::easyAlloc(alloc, len + 1));
    if (len != 0) {
        strncpy(result, src, len);
    }
    result[len] = 0;
    return result;
}
