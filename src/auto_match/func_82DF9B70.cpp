// hkpVehicleDefaultTransmission's scalar deleting destructor
// (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h): it calls the implicit destructor
// (??1, fn_82DF9AB8, emitted out of line) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkpVehicleDefaultTransmission.h"

void emitVtable_82DF9B70(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultTransmission(f); }
