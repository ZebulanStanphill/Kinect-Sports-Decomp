// hkMemoryAllocator (Common/Base/Memory/Allocator/hkMemoryAllocator.h): the abstract allocator interface
// behind hkMemoryRouter's heap(), temp() and so on. Its vtable ??_7hkMemoryAllocator@@6B@ (821327AC) has 13
// slots:
//   +0x00 ~hkMemoryAllocator (fn_82598868)
//   +0x04 blockAlloc(int numBytes)             pure
//   +0x08 blockFree(void *p, int numBytes)     pure
//   +0x0C bufAlloc(int &reqNumInOut, int elemSize)   fn_82CE6988: blockAlloc(n * elemSize)
//   +0x10 bufFree(void *p, int num, int elemSize)    fn_82CE69A0: blockFree(p, num * elemSize)
//   +0x14 bufRealloc(void *p, int oldNum, int &reqNumInOut, int elemSize)   fn_82CE6A70
//   +0x18 blockAllocBatch      fn_82CE69B8: blockAlloc(blockSize) for each of numPtrs pointers
//   +0x1C blockFreeBatch       fn_82CE6A08: blockFree(ptrs[i], blockSize) for each
//   +0x20 canAllocSingle       fn_82CE6A58: a tail call of slot +0x24. hkSolverAllocator's (fn_82CF7540) tells
//                              whether numBytes fit in its buffer
//   +0x24 canAllocTotal        fn_82CE6A68 returns true. hkFreeListAllocator's (fn_82CF8EC0) tells whether
//                              numBytes more stay under its soft limit
//   +0x28 getMemoryStatistics  pure. hkSolverAllocator's (fn_82CF7568) stores the buffer's size, the bytes in
//                              use, the peak and the bytes left into the first four words;
//                              hkFreeListAllocator's reset (fn_82CF89A8) builds the six-word block
//   +0x2C getAllocatedSize     pure. hkSolverAllocator's (fn_82CF7AE8) returns its third argument;
//                              hkThreadMemory's (fn_82CF7340) rounds it to its row's size and asks m_memory
//   +0x30 resetPeakMemoryStatistics   the empty function. hkSolverAllocator's (fn_82CF75A8) sets its peak
//                              to the bytes in use
// The parameter lists of slots 3-5 are read from the default implementations; their names follow Havok 2010
// but are not confirmed. The names of the slots from +0x18 and of MemoryStatistics and its members are
// Havok's, matched to the game by what the functions above do; the order is the game's.
#ifndef HAVOK_HKMEMORYALLOCATOR_H
#define HAVOK_HKMEMORYALLOCATOR_H
#include "havok/hkBaseTypes.h"

class hkMemoryAllocator {
public:
    // 0x18 bytes (fn_82CF89A8 clears six words before asking for them).
    struct MemoryStatistics {
        hk_size_t m_allocated;         // +0x0
        hk_size_t m_inUse;             // +0x4
        hk_size_t m_peakInUse;         // +0x8
        hk_size_t m_available;         // +0xC
        hk_size_t m_totalAvailable;    // +0x10
        hk_size_t m_largestBlock;      // +0x14
    };

    virtual ~hkMemoryAllocator();
    virtual void *blockAlloc(int numBytes) = 0;
    virtual void blockFree(void *p, int numBytes) = 0;
    virtual void *bufAlloc(int &reqNumInOut, int elemSize);
    virtual void bufFree(void *p, int num, int elemSize);
    virtual void *bufRealloc(void *p, int oldNum, int &reqNumInOut, int elemSize);
    virtual void blockAllocBatch(void **ptrsOut, int numPtrs, int blockSize);
    virtual void blockFreeBatch(void **ptrsIn, int numPtrs, int blockSize);
    virtual bool canAllocSingle(int numBytes);
    virtual bool canAllocTotal(int numBytes);
    virtual void getMemoryStatistics(MemoryStatistics &u) = 0;
    virtual int getAllocatedSize(const void *obj, int nbytes) = 0;
    virtual void resetPeakMemoryStatistics();
};

#endif
