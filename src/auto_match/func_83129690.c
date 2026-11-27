// Kinect Sports retail 4D5308C9, function 0x83129690 (28 bytes).
// Static initializer: copies the vector constant lbl_82079620 (words 0xFFFFFFFF, 0x00000000,
// 0x00000000, 0x00000000) into lbl_83218800.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82079620;
extern __vector4 lbl_83218800;

void fn_83129690(void)
{
    lbl_83218800 = lbl_82079620;
}
