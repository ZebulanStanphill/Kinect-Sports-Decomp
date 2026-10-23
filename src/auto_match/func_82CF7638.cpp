#include "havok/hkBase.h"
class hkSolverAllocator:public hkMemoryAllocator {
public: HK_DECLARE_PLACEMENT_ALLOCATOR(); hkSolverAllocator(hkFinishLoadedObjectFlag) {} virtual ~hkSolverAllocator(); virtual void *blockAlloc(int);virtual void blockFree(void*,int);
};
extern "C" void fn_82CE6978(void*);
static void *solverVtable() { union {void *ptr;char buf[sizeof(hkSolverAllocator)];} u;hkFinishLoadedObjectFlag f;new(u.buf) hkSolverAllocator(f);return u.ptr; }
extern "C" void fn_82CF7638(hkSolverAllocator *self) { *(void**)self=solverVtable();fn_82CE6978(self); }
