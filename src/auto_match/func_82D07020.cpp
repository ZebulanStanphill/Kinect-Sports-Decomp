// hkMemoryMeshShape scalar deleting destructor; it calls ~hkMemoryMeshShape (not visible here). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkMeshSection.h"
#include "havok/hkMemoryMeshShape.h"

void emitVtable_82D07020(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMemoryMeshShape(f); }
