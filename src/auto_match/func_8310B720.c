// Kinect Sports retail 4D5308C9, function 0x8310B720 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832843D0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832843D0;

void fn_8310B720(void)
{
    lbl_832843D0 = lbl_821CEA80;
}
