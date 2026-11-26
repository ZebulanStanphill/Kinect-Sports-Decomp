// hkpCollisionFilterList scalar deleting destructor; it calls ~hkpCollisionFilterList (out of line, already
// named) and frees through the class allocator. The finish constructor at the end only makes the compiler
// emit the vtables.
#include "havok/hkpCollisionFilterList.h"

void emitVtable_82D394B8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCollisionFilterList(f); }
