// hkpExtendedMeshShape scalar deleting destructor; it calls ~hkpExtendedMeshShape (82D43798, out of line) and
// frees through the class allocator. The function at the end only makes the compiler emit the vtable, and
// with it this deleting destructor; it copies an object because the header declares no inline constructor.
#include "havok/hkpExtendedMeshShape.h"

void emitVtable_82D43C30(void *p, const hkpExtendedMeshShape *q) { new (p) hkpExtendedMeshShape(*q); }
