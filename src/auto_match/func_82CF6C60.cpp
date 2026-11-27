// hkThreadMemory::getMemoryStatistics(MemoryStatistics &u), under its fn_ name: asks the allocator behind it.
#include "havok/hkThreadMemory.h"

extern "C" void fn_82CF6C60(hkThreadMemory *self, hkMemoryAllocator::MemoryStatistics &u)
{
    self->m_memory->getMemoryStatistics(u);
}
