// Kinect Sports retail 4D5308C9, function 0x83125A10 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA90 (0, 0, 1, 0) into lbl_83297080.

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CEA90;
extern __vector4 lbl_83297080;

void fn_83125A10(void)
{
    lbl_83297080 = lbl_821CEA90;
}
