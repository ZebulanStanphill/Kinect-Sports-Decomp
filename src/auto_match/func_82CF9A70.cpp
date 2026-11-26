// hkMemoryBlockServer scalar deleting destructor (identical code also serves
// hkSystemMemoryBlockServer). hkMemoryBlockServer is a root class (RTTI) with a
// placement-only allocator, so deleting frees nothing: the destructor stores
// the vtable and the function returns this. The function at the end only makes
// the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkMemoryBlockServer.h"

void emitVtable_82CF9A70(hkMemoryBlockServer *p) { p->hkMemoryBlockServer::~hkMemoryBlockServer(); }
