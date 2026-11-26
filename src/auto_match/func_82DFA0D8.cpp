// hkpVehicleRayCastWheelCollide's scalar deleting destructor (hkpVehicleRayCastWheelCollide.h): it calls the
// destructor (fn_82E01650, out of line) and frees through the class allocator. The trigger below only makes the
// compiler emit the vtable, and with it the deleting destructor; it copies an object because the header declares
// no inline constructor.
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

void emitVtable_82DFA0D8(void *p, const void *q)
{
    new (p) hkpVehicleRayCastWheelCollide(*(const hkpVehicleRayCastWheelCollide *)q);
}
