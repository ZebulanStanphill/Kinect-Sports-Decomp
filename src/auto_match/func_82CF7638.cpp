// hkSolverAllocator::~hkSolverAllocator (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h):
// stores the vtable and runs ~hkMemoryAllocator. It keeps its fn_ name (~hkFreeListMemorySystem,
// func_82CE6F68, calls it by that name), so the destructor is defined inline here and expanded into
// an extern "C" definition.
#include "havok/hkBase.h"

class hkSolverAllocator : public hkMemoryAllocator {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    HK_FORCE_INLINE virtual ~hkSolverAllocator() {}
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);
};

extern "C" void fn_82CF7638(hkSolverAllocator *self)
{
    self->hkSolverAllocator::~hkSolverAllocator();
}
