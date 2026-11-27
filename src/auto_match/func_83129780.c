// Kinect Sports retail 4D5308C9, function 0x83129780 (28 bytes).
// Static initializer: copies the vector constant lbl_820797C0 (-64.01, -32.01, -16.01, 0) into
// lbl_83218880.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_820797C0;
extern __vector4 lbl_83218880;

void fn_83129780(void)
{
    lbl_83218880 = lbl_820797C0;
}
