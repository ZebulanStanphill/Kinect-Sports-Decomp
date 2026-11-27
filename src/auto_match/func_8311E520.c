// Kinect Sports retail 4D5308C9, function 0x8311E520 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_832927C0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_832927C0;

void fn_8311E520(void)
{
    lbl_832927C0 = lbl_821CEA80;
}
