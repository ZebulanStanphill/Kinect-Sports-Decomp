// Kinect Sports retail 4D5308C9, function 0x8310B920 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832844F0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832844F0;

void fn_8310B920(void)
{
    lbl_832844F0 = lbl_821CEA80;
}
