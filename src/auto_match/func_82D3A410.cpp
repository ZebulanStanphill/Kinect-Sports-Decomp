// hkpMeshShape scalar deleting destructor: it calls the out-of-line destructor (??1hkpMeshShape, the implicit
// one, see func_82D3A2E0.cpp). The function at the end only makes the compiler emit the vtable, and with it
// this deleting destructor; it copies an object because the header declares no inline constructor.
#include "havok/hkpMeshShape.h"

void emitVtable_82D3A2E0(void *p, const hkpMeshShape *q) { new (p) hkpMeshShape(*q); }
