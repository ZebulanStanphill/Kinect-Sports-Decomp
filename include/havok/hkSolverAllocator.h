// hkSolverAllocator (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h), 0x140 bytes: the allocator of the
// solver's buffers, carving blocks from one buffer and keeping up to 32 freed ranges; hkFreeListMemorySystem holds
// one (82CE6FF0 constructs it).
//
// Layout from the constructor (??0hkSolverAllocator@@QAA@XZ, 82CF75C0, out of line): five cleared words at +0x4
// to +0x14, an hkInplaceArray<Element, 32> at +0x18 written as an hkArray over its storage (+0x24; the constructor
// only matched in that form, see hkArray.h), and the critical section at +0x124 (constructed with spin count 0).
// The destructor only stores the vtable and runs ~hkMemoryAllocator (82CF7638, 82CF7BC8): it frees no array, so
// the array is an hkArrayBase, which has no destructor.
// The member names are not confirmed by the game.
//
// Its vtable (??_7hkSolverAllocator@@6B@, 13 slots) overrides blockAlloc (82CF7530), blockFree (82CF7538),
// bufAlloc (82CF76A8) and bufFree (82CF7878), which have their names, and canAllocSingle (fn_82CF7540),
// getMemoryStatistics (fn_82CF7568), getAllocatedSize (fn_82CF7AE8) and resetPeakMemoryStatistics (fn_82CF75A8),
// which keep their fn_ names. The class has a placement allocator: its deleting destructor (82CF7BC8) frees
// nothing. The destructor is out of line (82CF7638): hkFreeListMemorySystem's destructor calls it, and the
// deleting destructor, in the same translation unit, expands it.
#ifndef HAVOK_HKSOLVERALLOCATOR_H
#define HAVOK_HKSOLVERALLOCATOR_H

#include "havok/hkBase.h"
#include "havok/hkArray.h"
#include "havok/hkCriticalSection.h"

class hkSolverAllocator : public hkMemoryAllocator {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();

    // A freed range of the buffer.
    struct Element {
        char *m_start;   // +0x0
        char *m_end;     // +0x4
    };

    hkSolverAllocator();
    virtual ~hkSolverAllocator();
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);
    virtual void *bufAlloc(int &reqNumInOut, int elemSize);
    virtual void bufFree(void *p, int num, int elemSize);
    virtual bool canAllocSingle(int numBytes);                 // fn_82CF7540
    virtual void getMemoryStatistics(MemoryStatistics &u);     // fn_82CF7568
    virtual int getAllocatedSize(const void *obj, int nbytes); // fn_82CF7AE8
    virtual void resetPeakMemoryStatistics();                  // fn_82CF75A8

    char *m_bufferStart;                    // +0x4
    char *m_bufferEnd;                      // +0x8
    char *m_currentEnd;                     // +0xC
    int m_numAllocatedBytes;                // +0x10
    int m_peakUse;                          // +0x14
    hkArrayBase<Element> m_freeElems;       // +0x18: hkInplaceArray<Element, 32>, the array,
    Element m_freeElemsStorage[32];         // +0x24 then its storage
    hkCriticalSection m_criticalSection;    // +0x124
};

#endif
