// Kinect Sports retail 4D5308C9, function 0x831112A8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287B10.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287B10;

void fn_831112A8(void)
{
    lbl_83287B10 = lbl_821CEA80;
}
