// hkLargeBlockAllocator's scalar deleting destructor ??_GhkLargeBlockAllocator@@UAAPAXI@Z (slot 0 of
// ??_7hkLargeBlockAllocator@@6B@, its only vtable): it calls the destructor (82D028F8); the placement allocator's
// operator delete frees nothing. The function at the end only makes the compiler emit the vtable and with it the
// deleting destructor (the implicit copy constructor stores the vtable).
#include "havok/hkLargeBlockAllocator.h"

void emitVtable_82D03F30(void *p, const hkLargeBlockAllocator &a) { new (p) hkLargeBlockAllocator(a); }
