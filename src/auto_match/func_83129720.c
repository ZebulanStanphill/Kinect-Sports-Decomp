// Kinect Sports retail 4D5308C9, function 0x83129720 (28 bytes).
// Static initializer: copies the vector constant lbl_82079670 (-0, 0, 0, 0) into lbl_83218850.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82079670;
extern __vector4 lbl_83218850;

void fn_83129720(void)
{
    lbl_83218850 = lbl_82079670;
}
