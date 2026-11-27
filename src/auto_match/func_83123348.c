// Kinect Sports retail 4D5308C9, function 0x83123348 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832950C0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832950C0;

void fn_83123348(void)
{
    lbl_832950C0 = lbl_821CEA80;
}
