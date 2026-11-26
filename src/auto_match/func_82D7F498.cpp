// hkpPhysicsSystem scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

void emitVtable_82D7F498(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPhysicsSystem(f); }
