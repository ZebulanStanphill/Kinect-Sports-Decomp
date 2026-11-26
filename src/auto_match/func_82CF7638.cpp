// hkSolverAllocator::~hkSolverAllocator (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h):
// stores the vtable and runs ~hkMemoryAllocator. It keeps its fn_ name (~hkFreeListMemorySystem,
// func_82CE6F68, calls it by that name), so the header's inline destructor is expanded here into
// an extern "C" definition.
#include "havok/hkBase.h"
#include "havok/hkSolverAllocator.h"

extern "C" void fn_82CF7638(hkSolverAllocator *self)
{
    self->hkSolverAllocator::~hkSolverAllocator();
}
