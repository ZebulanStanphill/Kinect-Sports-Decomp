#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D40DB0 {
    char pad0[0x30];
    __vector4 value; /* 0x30 */
} Obj_82D40DB0;

void fn_82D40DB0(Obj_82D40DB0 *self, __vector4 *out)
{
    *out = self->value;
}
