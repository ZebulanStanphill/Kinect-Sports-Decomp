#include "xdk/vectorintrinsics.h"

typedef union { unsigned int u[4]; __vector4 v; } VecU32_83107800;
extern __vector4 lbl_8329E9F0;

void fn_83107800(void)
{
    VecU32_83107800 t;
    t.u[0] = 0xffffffff;
    t.u[1] = 0xffffffff;
    t.u[2] = 0xffffffff;
    t.u[3] = 0xffffffff;
    lbl_8329E9F0 = t.v;
}
