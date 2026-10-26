// Destroys an object through virtual slot 8 and releases its system allocation.
#include <new>
#include "game/Allocator_825089A0.h"
struct Object_828C12B8 { virtual void vf00(); virtual void vf04(); virtual void vf08(int); };
extern "C" void fn_828C12B8(Object_828C12B8 *self) {
 self->vf08(0); fn_825089A0()->vf28(self);
}
