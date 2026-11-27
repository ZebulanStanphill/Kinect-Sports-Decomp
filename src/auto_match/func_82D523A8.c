#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D523A8 {
    char pad0[0x20];
    __vector4 value; /* 0x20 */
} Obj_82D523A8;

void fn_82D523A8(Obj_82D523A8 *self, __vector4 *out)
{
    *out = self->value;
}
