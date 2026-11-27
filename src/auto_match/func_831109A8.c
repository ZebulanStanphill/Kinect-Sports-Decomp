// Kinect Sports retail 4D5308C9, function 0x831109A8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287510.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287510;

void fn_831109A8(void)
{
    lbl_83287510 = lbl_821CEA80;
}
