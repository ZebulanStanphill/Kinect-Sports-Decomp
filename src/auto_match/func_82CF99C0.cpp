// hkSystemMemoryBlockServer::setMemoryLimit (vtable slot +0x20): 0 clears the limit; a limit below what is handed
// out is refused.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

hkBool hkSystemMemoryBlockServer::setMemoryLimit(hk_size_t size)
{
    if (size == 0) {
        m_limit = 0;
        return true;
    }
    if (m_allocated > size)
        return false;
    m_limit = size;
    return true;
}
