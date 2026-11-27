// hkThreadMemory::canAllocTotal(int numBytes), under its fn_ name: asks the allocator behind it.
#include "havok/hkThreadMemory.h"

extern "C" bool fn_82CF7328(hkThreadMemory *self, int numBytes)
{
    return self->m_memory->canAllocTotal(numBytes);
}
