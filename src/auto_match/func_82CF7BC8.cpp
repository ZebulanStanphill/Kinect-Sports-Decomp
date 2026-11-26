// hkSolverAllocator scalar deleting destructor (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h).
// The class has a placement allocator: deleting does nothing.
#include "havok/hkBase.h"
#include "havok/hkSolverAllocator.h"

void emitVtable_82CF7BC8(hkSolverAllocator *p) { p->hkSolverAllocator::~hkSolverAllocator(); }
