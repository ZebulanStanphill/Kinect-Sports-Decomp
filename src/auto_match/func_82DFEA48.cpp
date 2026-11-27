// hkpVehicleInstance::applyAction(const hkStepInfo &stepInfo) (Havok 2010, Physics/Vehicle/hkpVehicleInstance.cpp;
// slot +0xC of ??_7hkpVehicleInstance@@6B@): steps the vehicle. The step (82DFE878: the wheels' update, the
// wheel collide's collideWheels into a stack buffer, then the simulation from that output; Havok's stepVehicle)
// keeps its fn_ name: it is a C unit and its name is not confirmed.
#include "havok/hkpVehicleInstance.h"

extern "C" void fn_82DFE878(hkpVehicleInstance *self, const hkStepInfo &stepInfo);

void hkpVehicleInstance::applyAction(const hkStepInfo &stepInfo)
{
    fn_82DFE878(this, stepInfo);
}
