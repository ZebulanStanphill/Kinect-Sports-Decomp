// Kinect Sports retail 4D5308C9, function 0x831192D8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328C590.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328C590;

void fn_831192D8(void)
{
    lbl_8328C590 = lbl_821CEA80;
}
