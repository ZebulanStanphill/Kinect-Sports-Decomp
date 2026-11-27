#include "xdk/vectorintrinsics.h"

extern void fn_82CC5DC8(void *p, int a, __vector4 v);

void fn_82CC6078(void *self, void *p)
{
    fn_82CC5DC8(p, 0, __vspltish(1));
}
