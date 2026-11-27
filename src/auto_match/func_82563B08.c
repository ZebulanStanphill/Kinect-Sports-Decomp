#include "xdk/vectorintrinsics.h"

extern void fn_822E83E0(void *self, const __vector4 *v);
extern void fn_8240DEC0(void *self, const __vector4 *v);

void fn_82563B08(void *self, __vector4 a, __vector4 b)
{
    __vector4 ta = a;
    __vector4 tb;
    fn_822E83E0(self, &ta);
    tb = b;
    fn_8240DEC0(self, &tb);
}
