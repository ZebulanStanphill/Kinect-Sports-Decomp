// Kinect Sports retail 4D5308C9, function 0x83118C98 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328C170.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328C170;

void fn_83118C98(void)
{
    lbl_8328C170 = lbl_821CEA80;
}
