// hkpVehicleInstance's scalar deleting destructor (slot 0 of ??_7hkpVehicleInstance@@6B@). It calls
// hkpVehicleInstance's destructor fn_82DFE168, which keeps its fn_ name, and frees through the class allocator.
#include "havok/hkpVehicleInstance.h"

extern "C" {
void fn_82DFE168(hkpVehicleInstance *self);   // hkpVehicleInstance::~hkpVehicleInstance
}

extern "C" hkpVehicleInstance *fn_82DF9CF8(hkpVehicleInstance *self, unsigned int flags)
{
    fn_82DFE168(self);
    if (flags & 1)
        hkpVehicleInstance::operator delete(self);
    return self;
}
