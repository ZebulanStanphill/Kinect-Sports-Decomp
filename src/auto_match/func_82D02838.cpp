// hkFreeListAllocatorServer scalar deleting destructor. hkFreeListAllocatorServer is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"
#include "havok/hkFreeListAllocatorServer.h"

void emitVtable_82D02838(hkFreeListAllocatorServer *p) { p->hkFreeListAllocatorServer::~hkFreeListAllocatorServer(); }
