// hkSolverAllocator::hkSolverAllocator() (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.cpp). Member names are not confirmed.
#include "havok/hkBase.h"
#include "havok/hkSolverAllocator.h"

hkSolverAllocator::hkSolverAllocator()
    : m_bufferStart(HK_NULL), m_bufferEnd(HK_NULL), m_currentEnd(HK_NULL), m_numAllocatedBytes(0), m_peakUse(0),
      m_freeElems(m_freeElemsStorage, 0, 32)
{
}
