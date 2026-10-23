// hkSolverAllocator::hkSolverAllocator() (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.cpp). Member names are not confirmed.
#include "havok/hkBase.h"

// hkCriticalSection: its constructor is out of line and keeps its fn_ name.
class hkCriticalSection;
extern "C" void fn_82CEFBD0(hkCriticalSection *self, int spinCount);   // hkCriticalSection::hkCriticalSection
class hkCriticalSection {
public:
    HK_FORCE_INLINE hkCriticalSection(int spinCount = 0) { fn_82CEFBD0(this, spinCount); }
    hkUint8 m_section[0x1C];
};

class hkSolverAllocator : public hkMemoryAllocator {
public:
    struct Element {
        char *m_start;
        char *m_end;
    };
    hkSolverAllocator();

    char *m_bufferStart;                     // +0x4
    char *m_bufferEnd;                       // +0x8
    char *m_currentEnd;                      // +0xC
    int m_numAllocatedBytes;                 // +0x10
    int m_peakUse;                           // +0x14
    hkArray<Element> m_freeElems;            // +0x18, over m_freeElemsStorage
    Element m_freeElemsStorage[32];          // +0x24
    hkCriticalSection m_criticalSection;     // +0x124
};

hkSolverAllocator::hkSolverAllocator()
    : m_bufferStart(HK_NULL), m_bufferEnd(HK_NULL), m_currentEnd(HK_NULL), m_numAllocatedBytes(0), m_peakUse(0),
      m_freeElems(m_freeElemsStorage, 0, 32)
{
}
