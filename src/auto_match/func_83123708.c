// Kinect Sports retail 4D5308C9, function 0x83123708 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83295360.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83295360;

void fn_83123708(void)
{
    lbl_83295360 = lbl_821CEA80;
}
