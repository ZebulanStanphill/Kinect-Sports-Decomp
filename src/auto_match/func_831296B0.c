// Kinect Sports retail 4D5308C9, function 0x831296B0 (28 bytes).
// Static initializer: copies the vector constant lbl_82079630 (-0, 0, 0, 0) into lbl_83218810.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82079630;
extern __vector4 lbl_83218810;

void fn_831296B0(void)
{
    lbl_83218810 = lbl_82079630;
}
