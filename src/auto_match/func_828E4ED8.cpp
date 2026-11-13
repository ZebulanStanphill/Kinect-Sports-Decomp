// Deleting destructor of Obj_828E4E68 (still under its fn_ name).
#include "game/Obj_828E4E68.h"

extern "C" Obj_828E4E68 *fn_828E4ED8(Obj_828E4E68 *self, unsigned int flags)
{
    self->~Obj_828E4E68();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
