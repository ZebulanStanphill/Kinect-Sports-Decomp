// Passes a name to the object's target, when it has one.
#include "game/String_8268C510.h"

struct Owner_82727738 {
    char pad[0xec];
    void *target;
};

extern "C" void fn_827264B0(void *target, const String_8268C510 &name);

extern "C" void fn_82727738(Owner_82727738 *self, const char *text)
{
    if (self->target != 0) {
        fn_827264B0(self->target, text);
    }
}
