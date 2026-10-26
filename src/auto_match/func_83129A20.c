// Kinect Sports retail 4D5308C9, function 0x83129A20 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A20 (words 0x1F1F1F08, 0x1F1F1F08,
// 0x1F1F1F0A, 0x1F1F1F0A) into lbl_832189D0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A20;
extern __vector4 lbl_832189D0;

void fn_83129A20(void)
{
    lbl_832189D0 = lbl_82079A20;
}
