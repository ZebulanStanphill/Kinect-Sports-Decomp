// Returns the identity matrix lbl_83297BC0, building it on the first call (bit 0 of
// lbl_83297C00 is the function-local static's guard). The matrix is built as XNA Math's
// XMMatrixIdentity does on the VMX128 unit: unpacking a splatted 0 as VPACK_NORMSHORT2 gives 0
// in z and 1 in w, and one permute per row places them.
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

extern XMMATRIX lbl_83297BC0;
extern unsigned int lbl_83297C00;

XMMATRIX *fn_8253B7C0(void)
{
    if ((lbl_83297C00 & 1) == 0) {
        __vector4 w;

        lbl_83297C00 |= 1;
        w = __vupkd3d(__vspltisw(0), VPACK_NORMSHORT2);
        lbl_83297BC0.r[0] = __vpermwi(w, 234);
        lbl_83297BC0.r[1] = __vpermwi(w, 186);
        lbl_83297BC0.r[2] = __vpermwi(w, 174);
        lbl_83297BC0.r[3] = __vpermwi(w, 171);
    }
    return &lbl_83297BC0;
}
