// hkpVehicleManager's scalar deleting destructor (Physics/Vehicle/Manager/hkpVehicleManager.h); identical code
// also serves hkpVehicleLinearCastBatchingManager and hkpVehicleRayCastBatchingManager (folded). It calls the
// destructor (fn_82DFF158, out of line) and frees through the class allocator. The finish constructor below
// only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkpVehicleManager.h"

void emitVtable_82DF9DB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleManager(f); }
