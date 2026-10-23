// hkpVehicleSuspension::~hkpVehicleSuspension, the implicit destructor
// (Physics/Vehicle/Suspension/hkpVehicleSuspension.h), emitted out of line; hkpVehicleDefaultSuspension's deleting
// destructor (fn_82DF99C8) destroys its own array, then calls it. It destroys m_wheelParams (+0x8, 0x30-byte
// elements). The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpVehicleSuspension : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    struct SuspensionWheelParameters {
        hkVector4 m_hardpointChassisSpace;
        hkVector4 m_directionChassisSpace;
        hkReal m_length;
    };
    hkpVehicleSuspension() {}

    hkArray<SuspensionWheelParameters> m_wheelParams;   // +0x8
};

void emitVtable_82DF9958(void *p) { new (p) hkpVehicleSuspension; }
