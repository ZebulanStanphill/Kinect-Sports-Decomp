#include "xdk/vectorintrinsics.h"

typedef union { unsigned int u[4]; __vector4 v; } VecU32_831077A0;
extern __vector4 lbl_8329EA10;
void fn_831077A0(void)
{
    VecU32_831077A0 t;
    t.u[0] = 0;
    t.u[1] = 0;
    t.u[2] = 0xffffffff;
    t.u[3] = 0;
    lbl_8329EA10 = t.v;
}
