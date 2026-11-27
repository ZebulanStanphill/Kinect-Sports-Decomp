// hkpVehicleInstance's scalar deleting destructor (slot 0 of ??_7hkpVehicleInstance@@6B@, its only vtable):
// calls ~hkpVehicleInstance (82DFE168) out of line, then frees through the class allocator. The function at
// the end only makes the compiler emit the vtable.
#include "havok/hkpVehicleInstance.h"

void emitVtable_82DF9CF8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleInstance(f); }
