// hkpVehicleData::~hkpVehicleData, the implicit destructor (Physics/Vehicle/hkpVehicleData.h), emitted out of
// line and called by the deleting destructor (fn_82DF94E0): m_numWheelsPerAxle, then m_wheelParams. The
// constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkpVehicleData.h"

void emitVtable_82DF9428(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleData(f); }
