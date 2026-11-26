// hkpVehicleSuspension::~hkpVehicleSuspension, the implicit destructor
// (Physics/Vehicle/Suspension/hkpVehicleSuspension.h), emitted out of line; hkpVehicleDefaultSuspension's deleting
// destructor (fn_82DF99C8) destroys its own array, then calls it. It destroys m_wheelParams (+0x8, 0x30-byte
// elements). The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkpVehicleDefaultSuspension.h"

void emitVtable_82DF9958(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultSuspension(f); }
