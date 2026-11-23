#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" void fn_82E12CC8(void *self, const char *src)
{
    char **slot = reinterpret_cast<char **>(static_cast<char *>(self) + 0x14);
    char *old = *slot;
    hkMemoryRouter::easyFree(hkMemoryRouter::getInstance().heap(), old);
    *slot = hkString::strDup(src);
}
