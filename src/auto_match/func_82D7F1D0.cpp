// hkpLimitedHingeConstraintData scalar deleting destructor; it calls the destructor out of line. The finish constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpLimitedHingeConstraintData.h"

void emitVtable_82D7F1D0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLimitedHingeConstraintData(f); }
