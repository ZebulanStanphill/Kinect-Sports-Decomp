// hkpKeyframedRigidMotion scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

void emitVtable_82D7EEB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpKeyframedRigidMotion(f); }
