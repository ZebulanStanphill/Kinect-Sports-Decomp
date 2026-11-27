// Kinect Sports retail 4D5308C9, function 0x831297E0 (28 bytes).
// Static initializer: copies the vector constant lbl_820797F0 (0, -64.01, -32.01, -16.01) into
// lbl_832188B0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_820797F0;
extern __vector4 lbl_832188B0;

void fn_831297E0(void)
{
    lbl_832188B0 = lbl_820797F0;
}
