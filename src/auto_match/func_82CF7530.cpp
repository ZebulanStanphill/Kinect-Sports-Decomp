// hkSolverAllocator::blockAlloc (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.cpp): slot +0x4 of
// ??_7hkSolverAllocator@@6B@. The solver allocator hands out buffers only (bufAlloc); blocks are refused.
#include "havok/hkBase.h"
#include "havok/hkSolverAllocator.h"

void *hkSolverAllocator::blockAlloc(int numBytes)
{
    return 0;
}
