// hkpVehicleLinearCastWheelCollide's scalar deleting destructor (hkpVehicleLinearCastWheelCollide.h): it calls
// the destructor (fn_82E00B20, out of line) and frees through the class allocator. The function at the end only
// makes the compiler emit the vtable, and with it the deleting destructor: the header declares no inline
// constructor, so it copies an object.
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

void emitVtable_82DF9F00(void *p, const void *q)
{
    new (p) hkpVehicleLinearCastWheelCollide(*(const hkpVehicleLinearCastWheelCollide *)q);
}
