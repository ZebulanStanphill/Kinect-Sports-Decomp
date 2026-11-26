// hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake, the implicit destructor
// (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.h), emitted out of line and called by the deleting
// destructor (fn_82DF9710). It destroys m_wheelBrakingProperties (+0x8, 12-byte elements).
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkpVehicleDefaultBrake.h"

void emitVtable_82DF96A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultBrake(f); }
