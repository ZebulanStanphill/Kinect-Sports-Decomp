// Kinect Sports retail 4D5308C9, function 0x83129980 (28 bytes).
// Static initializer: copies the vector constant lbl_820799D0 (words 0x04050607, 0x0C0D0E0F,
// 0x04050607, 0x0C0D0E0F) into lbl_83218980.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799D0;
extern __vector4 lbl_83218980;

void fn_83129980(void)
{
    lbl_83218980 = lbl_820799D0;
}
