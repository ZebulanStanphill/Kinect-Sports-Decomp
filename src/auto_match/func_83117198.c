// Kinect Sports retail 4D5308C9, function 0x83117198 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328AF70.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328AF70;

void fn_83117198(void)
{
    lbl_8328AF70 = lbl_821CEA80;
}
