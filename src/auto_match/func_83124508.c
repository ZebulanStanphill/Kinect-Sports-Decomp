// Kinect Sports retail 4D5308C9, function 0x83124508 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83295CB0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83295CB0;

void fn_83124508(void)
{
    lbl_83295CB0 = lbl_821CEA80;
}
