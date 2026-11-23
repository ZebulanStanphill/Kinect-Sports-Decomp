#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" void fn_82CE5430(void *p);

char *hkString::strDup(const char *src)
{
    unsigned char auStack_40[48];

    fn_82CE5430(auStack_40);
    return hkString::strDup(src, hkMemoryRouter::getInstance().heap());
}
