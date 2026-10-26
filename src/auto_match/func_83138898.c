// Kinect Sports retail 4D5308C9, function 0x83138898 (28 bytes).
// Static initializer: sets the vector lbl_832623E0 to (0, 0, 0, 1), the last row of the identity
// matrix, built as XNA Math does on the VMX128 unit: unpacking a splatted 0 as VPACK_NORMSHORT2
// gives 0 in z and 1 in w, and a permute picks (z, z, z, w).

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

#define VPACK_NORMSHORT2 1

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);

extern __vector4 lbl_832623E0;

void fn_83138898(void)
{
    lbl_832623E0 = __vpermwi(__vupkd3d(__vspltisw(0), VPACK_NORMSHORT2), 171);
}
