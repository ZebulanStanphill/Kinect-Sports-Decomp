// hkSystemMemoryBlockServer::criticalAlloc (vtable slot +0x24): straight to the allocator, uncounted.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

void *hkSystemMemoryBlockServer::criticalAlloc(hk_size_t size) { return m_allocator->blockAlloc(size); }
