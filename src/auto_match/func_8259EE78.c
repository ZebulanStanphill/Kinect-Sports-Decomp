#include "xdk/vectorintrinsics.h"

void fn_8259EE78(void *self, __vector4 *out)
{
    *out = __VMXGetReg(77);
}
