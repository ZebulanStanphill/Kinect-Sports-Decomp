// Allocates a hkBsdSocket (0x24 bytes, class allocator) and constructs it with an invalid handle
// (-1); the pointer is not kept. Havok code: /O2.
#include "havok/hkBase.h"

class hkBsdSocket : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkBsdSocket(int s);
    hkUint8 m_data[0x24 - 8];
};

extern "C" void fn_82CFB940()
{
    new hkBsdSocket(-1);
}
