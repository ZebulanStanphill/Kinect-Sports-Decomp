// Kinect Sports retail 4D5308C9, function 0x83107F50 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83282920.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83282920;

void fn_83107F50(void)
{
    lbl_83282920 = lbl_821CEA80;
}
