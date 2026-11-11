// Kinect Sports retail 4D5308C9, function 0x82F595A0 (60 bytes).
// XNA Math XMMatrixTranslationFromVector on the VMX128 unit: identity rows from an unpacked
// splatted 0 (0 in z, 1 in w), and the offset's xyz inserted into the last row.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

#define VPACK_NORMSHORT2 1

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct {
    __vector4 r[4];
} XMMATRIX;

XMMATRIX fn_82F595A0(__vector4 offset)
{
    XMMATRIX m;
    __vector4 w = __vupkd3d(__vspltisw(0), VPACK_NORMSHORT2);

    m.r[0] = __vpermwi(w, 234);
    m.r[1] = __vpermwi(w, 186);
    m.r[2] = __vpermwi(w, 174);
    m.r[3] = __vrlimi(w, offset, 0xe, 0);
    return m;
}
