// Kinect Sports retail 4D5308C9, function 0x83123A08 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832955A0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832955A0;

void fn_83123A08(void)
{
    lbl_832955A0 = lbl_821CEA80;
}
