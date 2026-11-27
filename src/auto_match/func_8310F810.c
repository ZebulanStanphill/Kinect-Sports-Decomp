// Kinect Sports retail 4D5308C9, function 0x8310F810 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832869B0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832869B0;

void fn_8310F810(void)
{
    lbl_832869B0 = lbl_821CEA80;
}
