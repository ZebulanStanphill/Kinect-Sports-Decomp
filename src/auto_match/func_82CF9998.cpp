// hkSystemMemoryBlockServer::getTotalAvailableMemory (vtable slot +0x18): what is left under the limit, -1 without one.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

hk_size_t hkSystemMemoryBlockServer::getTotalAvailableMemory()
{
    if (m_limit == 0)
        return hk_size_t(-1);
    return m_limit - m_allocated;
}
