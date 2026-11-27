// Kinect Sports retail 4D5308C9, function 0x83139350 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83263040.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83263040;

void fn_83139350(void)
{
    lbl_83263040 = lbl_821CEA80;
}
