#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D4AB98 {
    char pad0[0x20];
    __vector4 value; /* 0x20 */
} Obj_82D4AB98;

void fn_82D4AB98(Obj_82D4AB98 *self, const __vector4 *value)
{
    self->value = *value;
}
