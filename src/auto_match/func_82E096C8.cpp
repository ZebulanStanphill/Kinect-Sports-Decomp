// hkTypeInfoRegistry scalar deleting destructor: implicit destructor (the hkStringMap member), then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkTypeInfoRegistry.h"

void emitVtable_82E096C8(void *p) { new (p) hkTypeInfoRegistry; }
