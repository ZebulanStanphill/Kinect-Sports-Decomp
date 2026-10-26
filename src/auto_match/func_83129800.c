// Kinect Sports retail 4D5308C9, function 0x83129800 (28 bytes).
// Static initializer: copies the vector constant lbl_8315C840 (words 0x1F1F1F00, 0x1F1F1F01,
// 0x1F1F1F10, 0x1F1F1F11) into lbl_832188C0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 lbl_8315C840;
extern __vector4 lbl_832188C0;

void fn_83129800(void)
{
    lbl_832188C0 = lbl_8315C840;
}
