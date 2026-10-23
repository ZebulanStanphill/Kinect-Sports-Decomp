// hkpVehicleDefaultSuspension scalar deleting destructor: the implicit destructor is inlined
// (m_wheelSpringParams, 0xC-byte elements, then hkpVehicleSuspension's out-of-line implicit
// destructor ??1, fn_82DF9958). The finish constructor below only makes the compiler emit
// the vtable.
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
    hkpVehicleSuspension(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_wheelParams(flag) {}
    virtual ~hkpVehicleSuspension();

    hkArray<SuspensionWheelParameters> m_wheelParams;   // +0x8
};

class hkpVehicleDefaultSuspension : public hkpVehicleSuspension {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    struct WheelSpringSuspensionParameters {
        hkReal m_strength;
        hkReal m_dampingCompression;
        hkReal m_dampingRelaxation;
    };
    hkpVehicleDefaultSuspension(hkFinishLoadedObjectFlag flag) : hkpVehicleSuspension(flag), m_wheelSpringParams(flag) {}

    hkArray<WheelSpringSuspensionParameters> m_wheelSpringParams;   // +0x14
};

void emitVtable_82DF99C8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultSuspension(f); }
