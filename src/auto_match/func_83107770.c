#include "xdk/vectorintrinsics.h"

typedef union { unsigned int u[4]; __vector4 v; } VecU32_83107770;
extern __vector4 lbl_8329EA20;
void fn_83107770(void)
{
    VecU32_83107770 t;
    t.u[0] = 0;
    t.u[1] = 0xffffffff;
    t.u[2] = 0;
    t.u[3] = 0;
    lbl_8329EA20 = t.v;
}
