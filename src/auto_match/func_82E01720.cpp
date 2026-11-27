// hkpVehicleRayCastWheelCollide::castSingleWheel(const hkpVehicleInstance::WheelInfo &,
// hkpWorldRayCastOutput &) const (Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.cpp; slot
// +0x38 of its vtable): casts the wheel's ray from the hard point to the ray end point through the phantom
// (hkpAabbPhantom::castRay, fn_82D8D008, keeps its fn_ name: Havok has two overloads).
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpAabbPhantom.h"

// hkpWorldRayCastInput (Physics/Collide/Query/CastUtil/hkpWorldRayCastInput.h), 0x30 bytes; no header yet.
struct hkpWorldRayCastInput {
    hkVector4 m_from;                      // +0x0
    hkVector4 m_to;                        // +0x10
    hkBool m_enableShapeCollectionFilter;  // +0x20
    hkUint32 m_filterInfo;                 // +0x24
};

extern "C" void fn_82D8D008(const hkpAabbPhantom *self, const hkpWorldRayCastInput &input,
                            hkpWorldRayCastOutput &output);   // hkpAabbPhantom::castRay

void hkpVehicleRayCastWheelCollide::castSingleWheel(const hkpVehicleInstance::WheelInfo &wheelInfo,
                                                    hkpWorldRayCastOutput &output) const
{
    hkpWorldRayCastInput in;
    in.m_from = wheelInfo.m_hardPointWs;
    in.m_to = wheelInfo.m_rayEndPointWs;
    in.m_enableShapeCollectionFilter = true;
    in.m_filterInfo = m_wheelCollisionFilterInfo;
    fn_82D8D008(m_phantom, in, output);
}
