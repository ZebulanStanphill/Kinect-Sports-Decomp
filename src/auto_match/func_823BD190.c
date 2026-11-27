#include "xdk/vectorintrinsics.h"

extern __vector4 fn_822CB730(void *source);

void fn_823BD190(void *self, void *source, __vector4 *out)
{
    __vector4 v = fn_822CB730(source);
    if (out != 0) {
        *out = v;
    }
}
