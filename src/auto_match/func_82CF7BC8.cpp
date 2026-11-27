// hkSolverAllocator scalar deleting destructor (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.cpp).
// The class has a placement allocator: deleting does nothing. The destructor is defined here as in the
// original translation unit (out of line as 82CF7638), so the deleting destructor expands it.
#include "havok/hkBase.h"
#include "havok/hkSolverAllocator.h"

hkSolverAllocator::~hkSolverAllocator() {}
