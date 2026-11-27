#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D96668 {
    char pad00[0x20];
    __vector4 v20;
    __vector4 v30;
} Obj_82D96668;

void fn_82D96668(Obj_82D96668 *self, const __vector4 *a, const __vector4 *b)
{
    self->v20 = *a;
    self->v30 = *b;
}
