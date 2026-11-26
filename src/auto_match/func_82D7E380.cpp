// hkpPhantom scalar deleting destructor; it calls ~hkpPhantom (fn_82D9AA48, out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpPhantom.h"

void emitVtable_82D7E380(void *p, const hkpShape *shape) { new (p) hkpPhantom(shape); }
