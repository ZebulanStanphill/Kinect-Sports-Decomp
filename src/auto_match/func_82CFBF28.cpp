#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

void hkString::strFree(char *s, hkMemoryAllocator &alloc)
{
    hkMemoryRouter::easyFree(alloc, s);
}
