#include "xdk/vectorintrinsics.h"

extern void fn_82D27010(void *self, void *arg, const __vector4 *scale);

void fn_82D27BB0(void *self, void *arg)
{
    __vector4 scale = { 1.0f, 1.0f, 1.0f, 0.0f };
    fn_82D27010(self, arg, &scale);
}
