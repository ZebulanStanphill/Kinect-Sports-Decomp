#include "xdk/vectorintrinsics.h"

static __forceinline void SetAll(__vector4 *vector, float value)
{
    vector->vector4_f32[0] = value;
    *vector = __vspltw(*vector, 0);
}

void fn_830838A8(char *self)
{
    __vector4 *corner;
    *(int *)self = -1;
    {
        char *type = &self[4];
        *type = 2;
    }
    self[5] = 1;
    corner = (__vector4 *)(self + 0x10);
    SetAll(corner, 3.40282e+38f);
    ((float *)self)[8] = -3.40282e+38f;
    ++corner;
    *corner = __vspltw(*corner, 0);
}
