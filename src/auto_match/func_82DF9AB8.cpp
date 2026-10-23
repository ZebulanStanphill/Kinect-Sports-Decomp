// hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission, the implicit destructor
// (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h), emitted out of line and called by the
// deleting destructor (fn_82DF9B70): m_wheelsTorqueRatio, then m_gearsRatio. The constructor below only makes
// the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"

class hkpVehicleTransmission : public hkReferencedObject {
public:
    hkpVehicleTransmission() {}
};

class hkpVehicleDefaultTransmission : public hkpVehicleTransmission {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultTransmission() {}

    hkReal m_downshiftRPM;               // +0x8
    hkReal m_upshiftRPM;                 // +0xC
    hkReal m_primaryTransmissionRatio;   // +0x10
    hkReal m_clutchDelayTime;            // +0x14
    hkReal m_reverseGearRatio;           // +0x18
    hkArray<hkReal> m_gearsRatio;        // +0x1C
    hkArray<hkReal> m_wheelsTorqueRatio; // +0x28
};

void emitVtable_82DF9AB8(void *p) { new (p) hkpVehicleDefaultTransmission; }
