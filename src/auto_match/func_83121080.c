// Kinect Sports retail 4D5308C9, function 0x83121080 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83293EB0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83293EB0;

void fn_83121080(void)
{
    lbl_83293EB0 = lbl_821CEA80;
}
