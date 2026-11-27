// Kinect Sports retail 4D5308C9, function 0x8311E460 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83292740.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83292740;

void fn_8311E460(void)
{
    lbl_83292740 = lbl_821CEA80;
}
