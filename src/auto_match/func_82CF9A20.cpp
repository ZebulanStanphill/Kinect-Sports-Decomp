// hkSystemMemoryBlockServer::criticalFree (vtable slot +0x28): straight to the allocator, uncounted.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

void hkSystemMemoryBlockServer::criticalFree(void *ptr, hk_size_t size) { m_allocator->blockFree(ptr, size); }
