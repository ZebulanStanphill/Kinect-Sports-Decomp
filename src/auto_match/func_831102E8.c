// Kinect Sports retail 4D5308C9, function 0x831102E8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287090.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287090;

void fn_831102E8(void)
{
    lbl_83287090 = lbl_821CEA80;
}
