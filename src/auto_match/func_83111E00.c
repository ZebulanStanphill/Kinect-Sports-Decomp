// Kinect Sports retail 4D5308C9, function 0x83111E00 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83288150.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83288150;

void fn_83111E00(void)
{
    lbl_83288150 = lbl_821CEA80;
}
