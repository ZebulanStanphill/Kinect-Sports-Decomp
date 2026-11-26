// hkpRejectChassisListener scalar deleting destructor. It keeps its fn_ name because the adjustor thunk for the
// hkpPhantomOverlapListener subobject (fn_82DF9140, subi r3, r3, 8; b fn_82DF9148) is plain C; so it is written out
// instead of being compiler-generated (??_G).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" hkpRejectChassisListener *fn_82DF9148(hkpRejectChassisListener *self, unsigned int flags)
{
    self->hkpRejectChassisListener::~hkpRejectChassisListener();
    if (flags & 1)
        hkpRejectChassisListener::operator delete(self);
    return self;
}
