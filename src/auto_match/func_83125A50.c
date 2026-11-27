// Kinect Sports retail 4D5308C9, function 0x83125A50 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEAC0 (0, -1, 0, 0) into lbl_832970A0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEAC0;
extern __vector4 lbl_832970A0;

void fn_83125A50(void)
{
    lbl_832970A0 = lbl_821CEAC0;
}
