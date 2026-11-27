// Kinect Sports retail 4D5308C9, function 0x83119B58 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328CB00.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328CB00;

void fn_83119B58(void)
{
    lbl_8328CB00 = lbl_821CEA80;
}
