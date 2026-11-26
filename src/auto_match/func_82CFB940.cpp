// Allocates a hkBsdSocket (0x24 bytes, class allocator) and constructs it with an invalid handle
// (-1); the pointer is not kept. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkBsdSocket.h"

extern "C" void fn_82CFB940()
{
    new hkBsdSocket(-1);
}
