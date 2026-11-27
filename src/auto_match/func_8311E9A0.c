// Kinect Sports retail 4D5308C9, function 0x8311E9A0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83292AC0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83292AC0;

void fn_8311E9A0(void)
{
    lbl_83292AC0 = lbl_821CEA80;
}
