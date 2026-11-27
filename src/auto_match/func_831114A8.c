// Kinect Sports retail 4D5308C9, function 0x831114A8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287C50.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287C50;

void fn_831114A8(void)
{
    lbl_83287C50 = lbl_821CEA80;
}
