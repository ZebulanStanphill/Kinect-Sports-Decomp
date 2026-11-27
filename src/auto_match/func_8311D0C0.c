// Kinect Sports retail 4D5308C9, function 0x8311D0C0 (28 bytes).
// Static initializer: sets the vector lbl_83291AC0 to (0, 0, 0, 1), the last row of the identity
// matrix, built as XNA Math does on the VMX128 unit: unpacking a splatted 0 as VPACK_NORMSHORT2
// gives 0 in z and 1 in w, and a permute picks (z, z, z, w).

#include "xdk/vectorintrinsics.h"

#define VPACK_NORMSHORT2 1

extern __vector4 lbl_83291AC0;

void fn_8311D0C0(void)
{
    lbl_83291AC0 = __vpermwi(__vupkd3d(__vspltisw(0), VPACK_NORMSHORT2), 171);
}
