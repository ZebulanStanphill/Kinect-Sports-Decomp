// Kinect Sports retail 4D5308C9, function 0x83138C38 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832626C0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832626C0;

void fn_83138C38(void)
{
    lbl_832626C0 = lbl_821CEA80;
}
