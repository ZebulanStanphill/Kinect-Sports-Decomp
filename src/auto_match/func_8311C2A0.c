// Kinect Sports retail 4D5308C9, function 0x8311C2A0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328E290.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328E290;

void fn_8311C2A0(void)
{
    lbl_8328E290 = lbl_821CEA80;
}
