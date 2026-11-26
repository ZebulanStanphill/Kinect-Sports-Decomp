// hkpVehicleDriverInputAnalogStatus::clone() const (Physics/Vehicle/DriverInput/Default/hkpVehicleDefaultAnalogDriverInput.cpp):
// a new status from the class allocator, default constructed, then assigned from *this with the implicit
// operator= (which also copies hkReferencedObject's m_memSizeAndFlags and m_referenceCount).
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

hkpVehicleDriverInputStatus *hkpVehicleDriverInputAnalogStatus::clone() const
{
    hkpVehicleDriverInputAnalogStatus *newStatus = new hkpVehicleDriverInputAnalogStatus();
    *newStatus = *this;
    return newStatus;
}
