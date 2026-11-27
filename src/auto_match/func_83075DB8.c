#include "xdk/vectorintrinsics.h"

void fn_83075DB8(char *self, int index, __vector4 amount)
{
    __vector4 *v = (__vector4 *)(self + index * 32);
    *v = __vaddfp(*v, amount);
}
