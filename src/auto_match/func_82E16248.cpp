#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" void fn_82E16248(void *self, const char *src)
{
    char **slot = reinterpret_cast<char **>(static_cast<char *>(self) + 0xc);
    char *old = *slot;
    hkMemoryRouter::easyFree(hkMemoryRouter::getInstance().heap(), old);
    *slot = hkString::strDup(src);
}
