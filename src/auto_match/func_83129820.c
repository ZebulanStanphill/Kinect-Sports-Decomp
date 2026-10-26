// Kinect Sports retail 4D5308C9, function 0x83129820 (28 bytes).
// Static initializer: copies the vector constant lbl_820798F0 (words 0xFFFFFFFF, 0x00000000,
// 0x00000000, 0x00000000) into lbl_832188D0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820798F0;
extern __vector4 lbl_832188D0;

void fn_83129820(void)
{
    lbl_832188D0 = lbl_820798F0;
}
