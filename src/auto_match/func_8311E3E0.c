// Kinect Sports retail 4D5308C9, function 0x8311E3E0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832926E0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832926E0;

void fn_8311E3E0(void)
{
    lbl_832926E0 = lbl_821CEA80;
}
