// hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission, the implicit destructor
// (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h), emitted out of line and called by the
// deleting destructor (fn_82DF9B70): m_wheelsTorqueRatio, then m_gearsRatio. The constructor below only makes
// the compiler emit the vtable, and with it this destructor.
#include "havok/hkpVehicleDefaultTransmission.h"

void emitVtable_82DF9AB8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultTransmission(f); }
