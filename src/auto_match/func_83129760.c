// Kinect Sports retail 4D5308C9, function 0x83129760 (28 bytes).
// Static initializer: copies the vector constant lbl_820797B0 (-128.01, 0, -8.01, 0) into
// lbl_83218870.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820797B0;
extern __vector4 lbl_83218870;

void fn_83129760(void)
{
    lbl_83218870 = lbl_820797B0;
}
