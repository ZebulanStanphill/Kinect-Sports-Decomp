// Kinect Sports retail 4D5308C9, function 0x83112378 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83288440.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83288440;

void fn_83112378(void)
{
    lbl_83288440 = lbl_821CEA80;
}
