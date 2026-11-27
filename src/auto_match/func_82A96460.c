// Fills the 16-vector block through fn_82A95FD8, then replaces each vector with its w component
// splatted to all four lanes.

#include "xdk/vectorintrinsics.h"

extern void fn_82A95FD8(void *, void *);

void fn_82A96460(void *self, __vector4 *out)
{
    int i;

    fn_82A95FD8(self, out);
    for (i = 0; i < 16; i++) {
        out[i] = __vspltw(out[i], 3);
    }
}
