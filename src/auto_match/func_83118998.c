// Kinect Sports retail 4D5308C9, function 0x83118998 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328BF70.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328BF70;

void fn_83118998(void)
{
    lbl_8328BF70 = lbl_821CEA80;
}
