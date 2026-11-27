// Kinect Sports retail 4D5308C9, function 0x8310B5C0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83284300.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83284300;

void fn_8310B5C0(void)
{
    lbl_83284300 = lbl_821CEA80;
}
