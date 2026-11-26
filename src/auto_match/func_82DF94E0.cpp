// hkpVehicleData's scalar deleting destructor (Physics/Vehicle/hkpVehicleData.h): it calls the implicit
// destructor (??1, fn_82DF9428, emitted out of line) and frees through the class allocator. The constructor
// below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkpVehicleData.h"

void emitVtable_82DF94E0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleData(f); }
