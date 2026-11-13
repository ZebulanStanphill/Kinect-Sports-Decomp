// Deleting destructor of Obj_8233C258 (the vtable's slot; still under its fn_ name).
#include "game/Obj_8233C258.h"

extern "C" {
void fn_8265CA20(void *ptr); // operator delete

Obj_8233C258 *fn_8233C208(Obj_8233C258 *self, unsigned int flags)
{
    self->~Obj_8233C258();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
}
