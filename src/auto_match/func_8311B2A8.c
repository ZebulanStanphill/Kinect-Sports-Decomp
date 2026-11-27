// Kinect Sports retail 4D5308C9, function 0x8311B2A8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328D960.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328D960;

void fn_8311B2A8(void)
{
    lbl_8328D960 = lbl_821CEA80;
}
