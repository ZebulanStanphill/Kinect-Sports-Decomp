#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D3CAE0 {
    char pad0[0x20];
    __vector4 value; /* 0x20 */
} Obj_82D3CAE0;

void fn_82D3CAE0(Obj_82D3CAE0 *self, __vector4 *out)
{
    *out = self->value;
}
