#include "xdk/vectorintrinsics.h"

extern void fn_822B6A58(__vector4 *out, int obj, int n);
extern void fn_823AFE00(void *p, __vector4 v);

typedef struct {
    char pad00[0xc];
    int obj;
    char pad10[0x14];
    void *target;
} Self;

void fn_822EFFC8(Self *self)
{
    if (self->target != 0 && *(int *)(self->obj + 0x24) == 0) {
        __vector4 v;
        fn_822B6A58(&v, self->obj, 0x20);
        fn_823AFE00(self->target, v);
    }
}
