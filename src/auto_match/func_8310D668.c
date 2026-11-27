// Kinect Sports retail 4D5308C9, function 0x8310D668 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83285610.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83285610;

void fn_8310D668(void)
{
    lbl_83285610 = lbl_821CEA80;
}
