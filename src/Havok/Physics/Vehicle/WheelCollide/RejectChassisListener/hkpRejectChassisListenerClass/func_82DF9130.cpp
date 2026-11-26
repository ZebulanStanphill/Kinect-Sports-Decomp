#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"
const void *getVtablehkpRejectChassisListener() {
 union { void *ptr; char buf[sizeof(hkpRejectChassisListener)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpRejectChassisListener(f);
 return u.ptr;
}
