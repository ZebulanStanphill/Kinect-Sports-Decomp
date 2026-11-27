// Kinect Sports retail 4D5308C9, function 0x83124588 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83295D10.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83295D10;

void fn_83124588(void)
{
    lbl_83295D10 = lbl_821CEA80;
}
