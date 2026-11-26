// hkpStorageExtendedMeshShape::ShapeSubpartStorage scalar deleting destructor: calls the user-written
// destructor (fn_82D4F128) out of line, then frees through the class allocator. The function at the end only
// makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

void emitVtable_82D4F230(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageExtendedMeshShape::ShapeSubpartStorage(f); }
