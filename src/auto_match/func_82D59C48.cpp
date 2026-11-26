// hkpCollisionDispatcher scalar deleting destructor; it calls ~hkpCollisionDispatcher (fn_82D597D8, out of
// line) and frees through the class allocator. The function at the end only makes the compiler emit the vtable;
// it copies an object because the header declares no inline constructor.
#include "havok/hkpCollisionDispatcher.h"

void emitVtable_82D59C48(void *p, const void *q) { new (p) hkpCollisionDispatcher(*(const hkpCollisionDispatcher *)q); }
