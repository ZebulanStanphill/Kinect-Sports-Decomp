// Kinect Sports retail 4D5308C9, function 0x8311C4E0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328E410.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328E410;

void fn_8311C4E0(void)
{
    lbl_8328E410 = lbl_821CEA80;
}
