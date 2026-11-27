// Kinect Sports retail 4D5308C9, function 0x831297C0 (28 bytes).
// Static initializer: copies the vector constant lbl_820797E0 (0, -128.01, 0, -8.01) into
// lbl_832188A0.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_820797E0;
extern __vector4 lbl_832188A0;

void fn_831297C0(void)
{
    lbl_832188A0 = lbl_820797E0;
}
