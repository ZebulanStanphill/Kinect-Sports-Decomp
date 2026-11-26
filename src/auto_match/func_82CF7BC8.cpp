// hkSolverAllocator scalar deleting destructor (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h).
// The class has a placement allocator: deleting does nothing.
#include "havok/hkBase.h"

class hkSolverAllocator : public hkMemoryAllocator {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    virtual ~hkSolverAllocator() {}
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);
};

void emitVtable_82CF7BC8(hkSolverAllocator *p) { p->hkSolverAllocator::~hkSolverAllocator(); }
