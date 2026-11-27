// Kinect Sports retail 4D5308C9, function 0x831100D0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83286F70.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83286F70;

void fn_831100D0(void)
{
    lbl_83286F70 = lbl_821CEA80;
}
