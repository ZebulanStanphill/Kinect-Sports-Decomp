// hkThreadMemory (Common/Base/Memory/Allocator/Thread/hkThreadMemory.h), 0x120 bytes: the per-thread allocator that
// keeps free lists of small blocks in front of another allocator (m_memory). hkFreeListMemorySystem holds 32 of
// them (82CE6FF0, 82CE6F68), hence the placement-only allocator.
// The constructor is out of line (82CF7428: clears the free lists, builds the row tables, clears m_memory). The
// destructor is inline: it calls releaseCachedMemory, then ~hkMemoryAllocator (82CE6AF8, 82CE6F68).
// releaseCachedMemory (82CF74E8: clears every row that has a free list, last to first) is the last slot of the
// vtable (??_7hkThreadMemory@@6B@, 14 slots: hkMemoryAllocator's 13 and this one); its name is Havok's.
// The class overrides every slot of hkMemoryAllocator but canAllocSingle and resetPeakMemoryStatistics;
// canAllocTotal and getMemoryStatistics forward to m_memory (82CF7328, 82CF6C60).
// The enumerators, member names and constSizeToRow follow Havok's header; the word at +0x11C is not named by any
// unit (the size comes from hkFreeListMemorySystem's thread data, whose next member is at +0x120).
#ifndef HAVOK_HKTHREADMEMORY_H
#define HAVOK_HKTHREADMEMORY_H

#include "havok/hkBase.h"

class hkThreadMemory : public hkMemoryAllocator {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
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
    HK_FORCE_INLINE virtual ~hkThreadMemory() { hkThreadMemory::releaseCachedMemory(); }
    virtual void *blockAlloc(int numBytes);                                           // fn_82CF71F8
    virtual void blockFree(void *p, int numBytes);                                    // fn_82CF7280
    virtual void *bufAlloc(int &reqNumInOut, int elemSize);                           // fn_82CF6B40
    virtual void bufFree(void *p, int num, int elemSize);                             // fn_82CF6B58
    virtual void *bufRealloc(void *p, int oldNum, int &reqNumInOut, int elemSize);    // fn_82CF73A0
    virtual void blockAllocBatch(void **ptrsOut, int numPtrs, int blockSize);         // fn_82CF6B70
    virtual void blockFreeBatch(void **ptrsIn, int numPtrs, int blockSize);           // fn_82CF6BE8
    virtual bool canAllocTotal(int numBytes);                                         // fn_82CF7328
    virtual void getMemoryStatistics(MemoryStatistics &u);                            // fn_82CF6C60
    virtual int getAllocatedSize(const void *obj, int nbytes);                        // fn_82CF7340

    virtual void releaseCachedMemory();          // +0x34

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
    hkUint32 m_unknown11C;                       // +0x11C
};

#endif
