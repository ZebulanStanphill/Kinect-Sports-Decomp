// Kinect Sports retail 4D5308C9, function 0x8311AC08 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328D5B0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328D5B0;

void fn_8311AC08(void)
{
    lbl_8328D5B0 = lbl_821CEA80;
}
