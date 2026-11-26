// hkpStorageMeshShape::SubpartStorage scalar deleting destructor: calls the user-written destructor
// (fn_82D501D0) out of line, then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpStorageMeshShape.h"

void emitVtable_82D503A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageMeshShape::SubpartStorage(f); }
