// hkThreadMemory::hkThreadMemory() (Common/Base/Memory/Allocator/Thread/hkThreadMemory.cpp): clears the free
// lists, builds the row tables (fn_82CF6C78), then clears m_memory. The original keeps r3 and r6 (0) live
// across the call because the callee was compiled earlier in the same file and MSVC knew which registers
// it clobbers; so the row-table builder is defined here too, as a static copy under its fn_ name (objdiff
// pairs the call with the original's fn_82CF6C78), before the constructor. Matches at the unit's /O1 (at
// /O2 the static helper is inlined).
#include "havok/hkBase.h"

class hkThreadMemory;
extern "C" {
static void fn_82CF6C78(hkThreadMemory *self);
}

class hkThreadMemory : public hkMemoryAllocator {
public:
    enum {
        MEMORY_MAX_ALL_ROW = 17,
        MEMORY_SMALL_BLOCK_RSHIFT_BITS = 4,
        MEMORY_MAX_SIZE_SMALL_BLOCK = 0x220,
        MEMORY_LARGE_BLOCK_RSHIFT_BITS = 10,
        MEMORY_MAX_SIZE_LARGE_BLOCK = 0x2000
    };
    struct FreeList {
        void *m_head;
        int m_numElem;
    };
    hkThreadMemory();
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);

    static HK_FORCE_INLINE int constSizeToRow(int size)
    {
        if (size <= 16) return 1;
        else if (size <= 32) return 2;
        else if (size <= 48) return 3;
        else if (size <= 64) return 4;
        else if (size <= 96) return 5;
        else if (size <= 128) return 6;
        else if (size <= 160) return 7;
        else if (size <= 192) return 8;
        else if (size <= 256) return 9;
        else if (size <= 320) return 10;
        else if (size <= 512) return 11;
        else if (size <= 544) return 12;
        else if (size <= 1024) return 13;
        else if (size <= 2048) return 14;
        else if (size <= 4096) return 15;
        else if (size <= 8192) return 16;
        else { __debugbreak(); return -1; }
    }

    hkMemoryAllocator *m_memory;                 // +0x4
    int m_maxNumElemsOnFreeList;                 // +0x8
    FreeList m_free_list[MEMORY_MAX_ALL_ROW];    // +0xC
    int m_row_to_size_lut[MEMORY_MAX_ALL_ROW];   // +0x94
    char m_small_size_to_row_lut[(MEMORY_MAX_SIZE_SMALL_BLOCK >> MEMORY_SMALL_BLOCK_RSHIFT_BITS) + 1];   // +0xD8
    int m_large_size_to_row_lut[MEMORY_MAX_SIZE_LARGE_BLOCK >> MEMORY_LARGE_BLOCK_RSHIFT_BITS];          // +0xFC
};

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
