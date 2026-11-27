// Kinect Sports retail 4D5308C9, function 0x83114D58 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83289BD0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83289BD0;

void fn_83114D58(void)
{
    lbl_83289BD0 = lbl_821CEA80;
}
