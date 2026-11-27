// Kinect Sports retail 4D5308C9, function 0x83138BB8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83262660.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83262660;

void fn_83138BB8(void)
{
    lbl_83262660 = lbl_821CEA80;
}
