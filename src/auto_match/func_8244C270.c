#include "xdk/vectorintrinsics.h"

extern int fn_8242C1B8(int a);
extern int fn_824C8210(int a, __vector4 v);
extern int fn_8255E0B0(int a, int b, __vector4 *c);

void fn_8244C270(int param_1)
{
    __vector4 v;
    int r = fn_8242C1B8(**(int **)(param_1 + 0x40));
    fn_8255E0B0(*(int *)(r + 0x14), 4, &v);
    fn_824C8210(*(int *)(**(int **)(param_1 + 0x40) + 0xa8), v);
}
