// Kinect Sports retail 4D5308C9, function 0x8311DA00 (64 bytes).
// Static initializer: sets the XMMATRIX lbl_83292050 to the identity matrix, built as XNA Math's
// XMMatrixIdentity does on the VMX128 unit: unpacking a splatted 0 as VPACK_NORMSHORT2 gives 0 in
// z and 1 in w, and one permute per row places them.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

#define VPACK_NORMSHORT2 1

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);

typedef struct {
    __vector4 r[4];
} XMMATRIX;

extern XMMATRIX lbl_83292050;

void fn_8311DA00(void)
{
    __vector4 w = __vupkd3d(__vspltisw(0), VPACK_NORMSHORT2);

    lbl_83292050.r[0] = __vpermwi(w, 234);
    lbl_83292050.r[1] = __vpermwi(w, 186);
    lbl_83292050.r[2] = __vpermwi(w, 174);
    lbl_83292050.r[3] = __vpermwi(w, 171);
}
