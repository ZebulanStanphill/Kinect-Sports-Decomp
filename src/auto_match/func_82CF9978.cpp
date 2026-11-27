// hkSystemMemoryBlockServer::free (vtable slot +0x10): uncounts the block and returns it to the allocator.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

void hkSystemMemoryBlockServer::free(void *data, hk_size_t size)
{
    m_allocated -= size;
    m_allocator->blockFree(data, size);
}
