// hkThreadMemory::hkThreadMemory() (Common/Base/Memory/Allocator/Thread/hkThreadMemory.cpp): clears the free
// lists, builds the row tables (fn_82CF6C78), then clears m_memory. The original keeps r3 and r6 (0) live
// across the call because the callee was compiled earlier in the same file and MSVC knew which registers
// it clobbers; so the row-table builder is defined here too, as a static copy under its fn_ name (objdiff
// pairs the call with the original's fn_82CF6C78), before the constructor. Matches at the unit's /O1 (at
// /O2 the static helper is inlined).
#include "havok/hkBase.h"
#include "havok/hkThreadMemory.h"

extern "C" {
static void fn_82CF6C78(hkThreadMemory *self);
}

extern "C" {
static void fn_82CF6C78(hkThreadMemory *self)
{
    int i;
    for (i = 0; i < (hkThreadMemory::MEMORY_MAX_SIZE_SMALL_BLOCK >> hkThreadMemory::MEMORY_SMALL_BLOCK_RSHIFT_BITS) + 1; i++) {
        int size = i << hkThreadMemory::MEMORY_SMALL_BLOCK_RSHIFT_BITS;
        int row = hkThreadMemory::constSizeToRow(size);
        self->m_small_size_to_row_lut[i] = static_cast<char>(row);
        self->m_row_to_size_lut[row] = size;
    }
    for (i = 0; i < hkThreadMemory::MEMORY_MAX_SIZE_LARGE_BLOCK >> hkThreadMemory::MEMORY_LARGE_BLOCK_RSHIFT_BITS; i++) {
        int size = (i + 1) << hkThreadMemory::MEMORY_LARGE_BLOCK_RSHIFT_BITS;
        int row = hkThreadMemory::constSizeToRow(size);
        self->m_large_size_to_row_lut[i] = row;
        self->m_row_to_size_lut[row] = size;
    }
}
}

hkThreadMemory::hkThreadMemory()
{
    for (int i = 0; i < MEMORY_MAX_ALL_ROW; i++) {
        m_free_list[i].m_head = HK_NULL;
        m_free_list[i].m_numElem = 0;
    }
    fn_82CF6C78(this);
    m_memory = HK_NULL;
}
