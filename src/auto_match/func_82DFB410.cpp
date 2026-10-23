// hkpVehicleDriverInputAnalogStatus::clone() const (Physics/Vehicle/DriverInput/Default/hkpVehicleDefaultAnalogDriverInput.cpp):
// a new status from the class allocator, default constructed, then assigned from *this with the implicit
// operator= (which also copies hkReferencedObject's m_memSizeAndFlags and m_referenceCount).
#include "havok/hkBase.h"

// Vtable (4 slots): the deleting destructor (the folded trivial one, fn_82D3B298), hkReferencedObject's two, clone.
class hkpVehicleDriverInputStatus : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDriverInputStatus() {}
    virtual hkpVehicleDriverInputStatus *clone() const = 0;
};

class hkpVehicleDriverInputAnalogStatus : public hkpVehicleDriverInputStatus {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDriverInputAnalogStatus() {}
    virtual hkpVehicleDriverInputStatus *clone() const;

    hkReal m_positionX;                 // +0x8
    hkReal m_positionY;                 // +0xC
    hkBool m_handbrakeButtonPressed;    // +0x10
    hkBool m_reverseButtonPressed;      // +0x11
};

hkpVehicleDriverInputStatus *hkpVehicleDriverInputAnalogStatus::clone() const
{
    hkpVehicleDriverInputAnalogStatus *newStatus = new hkpVehicleDriverInputAnalogStatus();
    *newStatus = *this;
    return newStatus;
}
