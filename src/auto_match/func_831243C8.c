// Kinect Sports retail 4D5308C9, function 0x831243C8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83295BD0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83295BD0;

void fn_831243C8(void)
{
    lbl_83295BD0 = lbl_821CEA80;
}
