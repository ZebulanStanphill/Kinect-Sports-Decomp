// Kinect Sports retail 4D5308C9, function 0x83129860 (28 bytes).
// Static initializer: copies the vector constant lbl_82079910 (words 0x1F1F1F00, 0x1F1F1F01,
// 0x1F1F1F02, 0x1F1F1F03) into lbl_832188F0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079910;
extern __vector4 lbl_832188F0;

void fn_83129860(void)
{
    lbl_832188F0 = lbl_82079910;
}
