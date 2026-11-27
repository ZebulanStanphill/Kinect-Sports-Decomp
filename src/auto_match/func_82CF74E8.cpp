// hkThreadMemory::releaseCachedMemory (Common/Base/Memory/Allocator/Thread/hkThreadMemory.cpp; vtable slot +0x34):
// clears every row whose free list holds elements, from the last row to the first. fn_82CF7138 clears one row
// (Havok's clearRow; it keeps its fn_ name).
#include "havok/hkBase.h"
#include "havok/hkThreadMemory.h"

extern "C" void fn_82CF7138(hkThreadMemory *self, int rowIndex);   // hkThreadMemory::clearRow

void hkThreadMemory::releaseCachedMemory()
{
    for (int rowIndex = MEMORY_MAX_ALL_ROW - 1; rowIndex >= 0; rowIndex--) {
        if (m_free_list[rowIndex].m_numElem)
            fn_82CF7138(this, rowIndex);
    }
}
