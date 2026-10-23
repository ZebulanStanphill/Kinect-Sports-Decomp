// hkSolverAllocator scalar deleting destructor (Common/Base/Memory/Allocator/Solver/hkSolverAllocator.h).
#include "havok/hkBaseTypes.h"

class hkMemoryAllocator;
extern "C" void fn_82CE6978(hkMemoryAllocator *self);   // hkMemoryAllocator::~hkMemoryAllocator

// hkMemoryAllocator's destructor is out of line under its fn_ name (a Matching
// C unit calls it) and stores the hkMemoryAllocator vtable itself, so this
// local declaration reaches it through an inline wrapper and declares the
// class novtable: the wrapper must not store the vtable a second time.
class __declspec(novtable) hkMemoryAllocator {
public:
    // HK_DECLARE_PLACEMENT_ALLOCATOR(): deleting does nothing.
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; }
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}
    HK_FORCE_INLINE void HK_CALL operator delete(void *) {}

    HK_FORCE_INLINE virtual ~hkMemoryAllocator() { fn_82CE6978(this); }
    virtual void *blockAlloc(int numBytes) = 0;
    virtual void blockFree(void *p, int numBytes) = 0;
};

class hkSolverAllocator : public hkMemoryAllocator {
public:
    virtual ~hkSolverAllocator() {}
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);
};

void emitVtable_82CF7BC8(hkSolverAllocator *p) { p->hkSolverAllocator::~hkSolverAllocator(); }
