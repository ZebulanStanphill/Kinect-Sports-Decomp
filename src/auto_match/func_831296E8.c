// Static initializer: sets a global vector to (1, 1, 1, 1) (integer splat converted to float).

#include "xdk/vectorintrinsics.h"

extern __vector4 lbl_83218830;

void fn_831296E8(void)
{
    lbl_83218830 = __vcfsx(__vspltisw(1), 0);
}
