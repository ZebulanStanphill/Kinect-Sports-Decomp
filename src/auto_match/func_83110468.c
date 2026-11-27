// Kinect Sports retail 4D5308C9, function 0x83110468 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83287190.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83287190;

void fn_83110468(void)
{
    lbl_83287190 = lbl_821CEA80;
}
