// hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering, the implicit destructor
// (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.h), emitted out of line and called by the deleting
// destructor (fn_82DF9888). It destroys m_doesWheelSteer (+0x10).
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkpVehicleDefaultSteering.h"

void emitVtable_82DF9818(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultSteering(f); }
