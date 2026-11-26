// hkpBoxShape scalar deleting destructor; it calls ~hkpBoxShape (out of line, already named) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpBoxShape.h"

void emitVtable_82D39138(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBoxShape(f); }
