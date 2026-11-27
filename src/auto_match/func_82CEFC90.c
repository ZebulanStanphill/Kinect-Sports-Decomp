#include "xdk/vectorintrinsics.h"

typedef struct Obj_82CEFC90 {
    char pad0[0x40];
    __vector4 value; /* 0x40 */
} Obj_82CEFC90;

void fn_82CEFC90(Obj_82CEFC90 *self, __vector4 *out)
{
    *out = self->value;
}
