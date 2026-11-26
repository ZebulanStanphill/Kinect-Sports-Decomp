// hkpConstraintInstance scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

void emitVtable_82D7E940(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConstraintInstance(f); }
