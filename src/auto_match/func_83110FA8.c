// Kinect Sports retail 4D5308C9, function 0x83110FA8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287910.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287910;

void fn_83110FA8(void)
{
    lbl_83287910 = lbl_821CEA80;
}
